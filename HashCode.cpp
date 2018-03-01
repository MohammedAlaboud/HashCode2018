#include <cstdio>
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "Ride.h"
#include "Vehicle.h"
#include "DataParser.h"
#include "Map.h"

// get map specificatios form vishnus class



int main() {

  string fileName = "e_high_bonus.in";
  DataParser parser(fileName);
  
  vector<Ride> rides = parser.getRides();
  vector<int> data  = parser.getData();//R,C,F,N,B,T
  int maxTime = data[5];
  
  vector<Vehicle> vehicles(data[2]);
  Map map(rides);

  Ride curr;
  
  for(int time = 0; time < maxTime; time++){

    for(Vehicle v:vehicles)
    {
        if(v.isAvailable(time))
        {  
            curr = map.closestStart(v,time);
            if(curr.getStartTime() == -1)
            {
                time = maxTime;
                break;
            }
            v.move(curr, time);          
        }
    }
  }
  
  return 0;
}
