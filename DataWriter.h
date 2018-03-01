#ifndef __DATAWRITER_H_INCLUDED__
#define __DATAWRITER_H_INCLUDED__

class DataWriter;

#include <vector>
#include <fstream>
#include <string>
#include <cstdio>
#include "Ride.h"

using namespace std;

class DataWriter {
  DataWriter (){
  }

  void write(vector<vector<int>> input){
    string temp ="";
    for(auto vhicle : input){
      temp += to_string(vhicle.size());
      for(auto ride : vhicle){
        temp += +" " + to_string(ride.getIdentifier());
      }
      temp += "/n"
    }
    ofstream saveFile ("output.txt");
    saveFile << temp;
    saveFile.close();
  }

  ~DataWriter (){

  }
};

#endif
