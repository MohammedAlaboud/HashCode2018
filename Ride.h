#ifndef __RIDE_H_INCLUDED__
#define __RIDE_H_INCLUDED__

class Ride;

#include "Coordinate.h"

class Ride {
private:

  int identifier;

  Coordinate start;
  Coordinate end;
  int startTime;
  int endTime;

  bool compleated;
  bool inPorgress;


public:
  Ride (Coordinate start, Coordinate end,int startTime,int endTime,int identifier):
        start(start),end(end),startTime(startTime),endTime(endTime),identifier(identifier){
          compleated = false;
          inPorgress = false;
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

  bool isCompleat(){
    return compleated;
  }

  void startRide(){
    inPorgress = true;
  }

  bool inProgress(){
    return inPorgress;
  }


  ~Ride (){
    //hi
  }
};

#endif
