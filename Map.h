#ifndef MAPOFITEMS_H
#define MAPOFITEMS_H

#include <vector>
#include <iostream>
#include coordinate.h
#include <cmath>

using std::vector;
using std::abs;

// TODO: your code goes here

class MapOfItems {
    
private:
    vector <Ride> rides;
    int time = 0;
    
public:
    
    
    void addRide(const Ride ride){
        rides.push_back(ride);
    }
    
    int steps(Coordinates start, Coordinates end){
        
        int ySteps = 0;
        int xSteps = 0;
        
        ySteps = abs(end.get(y) - start.get(y));
        xSteps = abs(end.get(x) - start.get(x));
        
        int totalSteps = 0;
        
        totalSteps = ySteps + xSteps;
        
        return totalSteps;
    }
    
    

    
};

// don't write any code below this line

#endif

