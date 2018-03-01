#ifndef __DARAWRITER_H_INCLUDED__
#define __DATAWRITER_H_INCLUDED__

#include <vector>
#include <fstream>
#include <string>
#include <cstdio>
#include "Ride.h"

using namespace std;

class DataWriter {

  public:
  DataWriter (){
  }

  void write(vector<vector<int>> input, string outputFile){
    string temp ="";
    for(auto v : input){
      temp += to_string(v.size());
      for(auto r : v){
        temp += +" " + to_string(r);
      }
      temp += "\n";
    }
    ofstream saveFile (outputFile);
    saveFile << temp;
    saveFile.close();
  }

  ~DataWriter (){

  }
};

#endif

// int main()
// {
//     vector<vector<int>> test{{0,1,2},{3}};
//     DataWriter writer;
//     writer.write(test);
// }
