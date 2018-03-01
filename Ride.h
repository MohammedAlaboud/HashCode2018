#ifndef __RIDE_H_INCLUDED__
#define __RIDE_H_INCLUDED__

class Ride;

#include "Coordinate.h"
#include <cmath>

using std::abs;

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
    Ride (Coordinate start, Coordinate end, int startTime, int endTime, int identifier):
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

    bool isComplete(){
        return compleated;
    }

    void startRide(){
        inPorgress = true;
    }

    bool inProgress(){
        return inPorgress;
    }

    int rideSteps(){

        int ySteps = 0;
        int xSteps = 0;

        ySteps = abs(end.get(y) - start.get(y));
        xSteps = abs(end.get(x) - start.get(x));

        int totalSteps = 0;

        totalSteps = ySteps + xSteps;

        return totalSteps;

    }


    ~Ride (){
        //hi
    }
};

#endif
