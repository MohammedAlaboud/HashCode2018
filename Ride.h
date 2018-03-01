#ifndef __RIDE_H_INCLUDED__
#define __RIDE_H_INCLUDED__

class Ride;

#include "Coordinate.h"

class Ride {
private:

  Coordinate start;
  Coordinate end;
  int startTime;
  int endTime;


public:
  Ride (Coordinate start, Coordinate end,int startTime,int endTime):
        start(start),end(end),startTime(startTime),endTime(endTime){
    //hi
  }

  Coordinate getStart(){
    return start;
  }

  Coordinate getEnd(){
    return end;
  }

  int getStartTime(){
    return startTime;
  }
  int getEndTime(){
    return endTime;
  }


  ~Ride (){
    //hi
  }
};

#endif
