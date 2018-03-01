#ifndef MAPOFITEMS_H
#define MAPOFITEMS_H

#include <vector>
#include <iostream>
#include "Coordinate.h"
#include "Ride.h"
#include "Vehicle.h"
#include <cmath>

using std::vector;
using std::abs;

// TODO: your code goes here

class Map {
    
private:

    vector<Ride> rides;
    
public:
    
    Map(vector<Ride> ridesIn)
    {
        rides = ridesIn;
    }
    
    int steps(Coordinate start, Coordinate end){
        
        int ySteps = 0;
        int xSteps = 0;
        
        ySteps = abs(end.getY() - start.getY());
        xSteps = abs(end.getX() - start.getX());
        
        int totalSteps = 0;
        
        totalSteps = ySteps + xSteps;
        
        return totalSteps;
    }
    
    
    Coordinate closestStart(Vehicle v, int time){
        
        Ride closest = rides[0];
        int closestSteps = -1;
        int rSteps = 0;
        Coordinate loc = v.getLocation();
        
        for(int i = 0; i < rides.size(); i++){
        
            rSteps = steps(loc, rides[i].getStart());
            
            if(time+rSteps >= rides[i].getStartTime() && (rSteps < closestSteps ||closestSteps == -1) ){
        
                if(!(rides[i].inProgress())){
                    closest = rides[i];
                    closestSteps = rSteps;
                }
            }
        }
        
        return closest.getStart();
    }
    
};

// don't write any code below this line

#endif

