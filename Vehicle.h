#ifndef __VEHICLE_H_INCLUDED__
#define __VEHICLE_H_INCLUDED__

class Vhicle;

#include "Coordinate.h"

class Vehicle {
private:
  Coordinate location;
public:
  Vehicle ():location(){
    location = new coordinate(0,0)
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
