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

  string fileName = "a_example.in";
  DataParser parser(fileName);
  
  vector<Ride> rides = parser.getRides();
  vector<int> data  = parser.getData();//R,C,F,N,B,T
  int maxTime = data[5];
  
  vector<Vehicle> vehicles(data[2]);
  Map map(rides);

  
  for(int time = 0; time < maxTime; time++){
    for(Vehicle v:vehicles)
    {
        if(v.isAvailable(time))
        {               
        }
    }
  }
  
  return 0;
}
