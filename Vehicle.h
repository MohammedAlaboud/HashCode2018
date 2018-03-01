#ifndef __VEHICLE_H_INCLUDED__
#define __VEHICLE_H_INCLUDED__

class Vhicle;

#include "Coordinate.h"
#include "Ride.h"
class Vehicle {
private:
  Coordinate location;
  int timeAvalable;

public:
  Vehicle ():location(){
    location = new coordinate(0,0);
    timeAvalable = -1;
  }

  bool isAvalable(int timeStamp){
    return timeStamp > timeAvalable;
  }

  void move(Ride ride,int currntTime){
    timeAvalable = currntTime + ride.getSteps();
    setLoc(ride.getEnd());
  }

  getLoc(){
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
