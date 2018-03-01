#ifndef __COORDINATE_H_INCLUDED__
#define __COORDINATE_H_INCLUDED__

class Coordinate;
class Coordinate {
private:
  int x;
  int y;
public:

  Coordinate(){
    x = 0;
    y = 0;
  }
  Coordinate (int x, int y):x(x),y(y){
    //Hi
  }

  int getX(){
    return x;
  }
  int getY(){
    return y;
  }

  ~Coordinate (){
    //bye
  }
};
#endif
