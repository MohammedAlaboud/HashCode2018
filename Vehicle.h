#ifndef __VEHICLE_H_INCLUDED__
#define __VEHICLE_H_INCLUDED__

class Vhicle;

#include "Coordinate.h"

class Vehicle {
private:
  Coordinate location;
public:
  Vehicle (Coordinate location):location(location){
    //hi
  }
  getLoc(){
    return location;
  }
  ~Vehicle (){
    //bye
  }
};


#endif
