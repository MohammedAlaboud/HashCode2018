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
    
    
    Coordinate closestStart(Vehicle v){
        
        Ride closest = rides[0];
        int closestSteps = -1;
        int rSteps = 0;
        
        for(int i = 0; i < rides.size){
            rSteps =steps(v.getLoc, rides[i].getStart)
            if(time+rsteps >= rides[i].getStartTime() && (rSteps < closest ||closestSteps = -1) ){
        
                if(!(rides[i].inProgress)){
                    closest = rides[i];
                    closestSteps = rSteps;
                }
            }
        }
        
        return closest;
    }
    
};

// don't write any code below this line

#endif

