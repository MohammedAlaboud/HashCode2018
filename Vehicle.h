#ifndef __VEHICLE_H_INCLUDED__
#define __VEHICLE_H_INCLUDED__

#include "Coordinate.h"
#include "Ride.h"

class Vehicle {
private:
  Coordinate location;
  int timeAvalable;

public:
  Vehicle(){
    location = Coordinate(0,0);
    timeAvalable = -1;
  }

  bool isAvailable(int timeStamp){
    return timeStamp > timeAvalable;
  }

  void move(Ride ride,int currntTime){
    timeAvalable = currntTime + ride.getSteps();
    setLoc(ride.getEnd());
  }

  Coordinate getLocation(){
    return location;
  }
  
  void setLoc(Coordinate loc){
    location = loc;
  }
  ~Vehicle (){
    //bye
  }
};


#endif
