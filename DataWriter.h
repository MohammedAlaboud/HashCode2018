#ifndef __DATAWRITER_H_INCLUDED__
#define __DATAWRITER_H_INCLUDED__

class DataWriter;

#include <vector>
#include <fstream>
#include <string>
#include <cstdio>

class DataWriter {
private:
  /* data */

public:
  DataWriter (){
  }

  void write(vector<vector<int>> input){
    string temp ="";
    for(auto vhicle : input){
      temp += itos(vhicle.size());
      for(auto ride )
      temp += "/n"
    }
  }
  ~DataWriter (){

  }
};

#endif
