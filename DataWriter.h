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
      for(auto ride : vhicle){
        temp += +" " + itos(ride.getIdentifier());
      }
      temp += "/n"
    }
    ofstream saveFile("output.txt");
    saveFile << temp;
    saveFile.close();
  }
  
  ~DataWriter (){

  }
};

#endif
