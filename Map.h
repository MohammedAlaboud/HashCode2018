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

    int time = 0;
    vector<Ride> rides;
    vector<Vehicle> vehicles;
    
public:
    
    vector<Ride> getRides(){
        return rides;
    }
    vector<Vehicles> getVehicles(){
        return Vehicles;
    }
    
    void addRide(const Ride r){
        rides.push_back(r);
    }
    
    void addVehicle(const Vehicle v){
        vehicles.push_back(v);
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
    
    
    Coordinate closestStart(Vehicle v, rides){
        
        closest = rides[0];
        
        for(int i = 0; i < rides.size){
            
            if(steps(v.getLoc, rides[i].getStart) < closest){
                
                closest = rides[i];
                
            }
        }
        
        return closest;
    }
    
};

// don't write any code below this line

#endif

