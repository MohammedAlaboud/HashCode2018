#ifndef __RIDE_H_INCLUDED__
#define __RIDE_H_INCLUDED__

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
    Ride (Coordinate start, Coordinate end, int startTime, int endTime,int identifier):
    start(start),end(end),startTime(startTime),endTime(endTime),identifier(identifier){
        compleated = false;
        inPorgress = false;
    }

    Ride():startTime(-1) 
    {}
    
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

    int getIdentifier(){
      return identifier;
    }

    int getSteps(){

        int ySteps = 0;
        int xSteps = 0;

        ySteps = abs(end.getY() - start.getY());
        xSteps = abs(end.getX() - start.getX());

        int totalSteps = 0;

        totalSteps = ySteps + xSteps;

        return totalSteps;

    }


    ~Ride (){
        //hi
    }
};

#endif
