#include <cstdio>
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "Ride.h"
#include "Vehicle.h"
#include "DataParser.h"
#include "DataWriter.h"
#include "Map.h"

// get map specificatios form vishnus class



void solve(string fileName, string outputName) {

  
  DataParser parser(fileName);
  
  vector<Ride> rides = parser.getRides();
  vector<int> data  = parser.getData();//R,C,F,N,B,T
  int maxTime = data[5];
  
  vector<Vehicle> vehicles(data[2]);
  Map map(rides);

  Ride curr;
  vector<vector<int>> output(data[2], vector<int>());

  
  int i ;
  for(int time = 0; time < maxTime; time++){
    
    i = 0;
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
            output[i].push_back(curr.getIdentifier());        
        }
        i++;
    }
  }
  
  DataWriter writer;
  writer.write(output,outputName);
  
}

int main()
{
    solve("a_example.in", "A_output.txt");
    cout<<"A"<<endl;
    solve("b_should_be_easy.in", "B_output.txt");
        cout<<"A"<<endl;
    solve("c_no_hurry.in", "C_output.txt");
        cout<<"A"<<endl;
    solve("d_metropolis.in", "D_output.txt");
        cout<<"A"<<endl;
    solve("e_high_bonus.in", "E_output.txt");
        cout<<"A"<<endl;
}
