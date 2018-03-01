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
    
    void createAndAddIntersetions(){
        
        Coordinate zeroZero = new Coordinate(0,0);
        Coordinate zeroOne = new Coordinate(0,1);
        Coordinate zeroTwo = new Coordinate(0,2);
        Coordinate zeroThree = new Coordinate(0,3);
        Coordinate oneZero = new Coordinate(1,0);
        Coordinate oneOne = new Coordinate(1,1);
        Coordinate oneTwo new Coordinate(1,2);
        Coordinate oneThree = new Coordinate(1,3);
        Coordinate twoZero = new Coordinate(2,0);
        Coordinate twoOne = new Coordinate(2,1);
        Coordinate twoTwo = new Coordinate(2,2);
        Coordinate twoThree = new Coordinate(2,3);
        Coordinate threeZero = new Coordinate(3,0);
        Coordinate threeOne = new Coordinate(3,1);
        Coordinate threeTwo = new Coordinate(3,2);
        Coordinate threeThree = new Coordinate(3,3);
        
    }
    
    
};

// don't write any code below this line

#endif

