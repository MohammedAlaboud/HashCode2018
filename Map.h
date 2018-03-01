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
    
    
    Ride closestStart(Vehicle v, int time){
        
        if(rides.size() == 0)
        {
            return Ride();
        }
        auto closest = rides.begin();
        int closestSteps = -1;
        int rSteps = 0;
        Coordinate loc = v.getLocation();
        
        auto r = rides.begin();
        auto end = rides.end();
        while(r != end){
        
            rSteps = steps(loc, r->getStart());
            
            
            if(time+rSteps >= r->getStartTime() && (rSteps < closestSteps ||closestSteps == -1) ){
        
                if(!(r->inProgress())){
                    closest = r;
                    closestSteps = rSteps;
                }
            }
            
            r++;
        }
        
        Ride ret = *closest;        
        rides.erase(closest);
        return ret;
    }
    
};

// don't write any code below this line

#endif

