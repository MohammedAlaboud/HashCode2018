#ifndef __DATAPARSER_H_INCLUDED__
#define __DATAPARSER_H_INCLUDED__


class DataParser;


#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Ride.h"
#include "Coordinate.h"

class DataParser{

    private:
    vector<Ride> rides;
    vector<int> data;

    public:

    DataParser(string fileName) 
    {
        ifstream inFile(fileName);
        string oneLine;

        getline(inFile,oneLine);

        int spacePos = oneLine.find_first_of(' ');
        int oldPos = 0;

        data = vector<int>();

        data.push_back(stoi(oneLine.substr(oldPos,spacePos)));//R


        oldPos = spacePos;
        spacePos = oneLine.find_first_of(' ',spacePos+1);

        data.push_back(stoi(oneLine.substr(oldPos,spacePos)));//C

        oldPos = spacePos;
        spacePos = oneLine.find_first_of(' ',spacePos+1);

        data.push_back(stoi(oneLine.substr(oldPos,spacePos)));//F

        oldPos = spacePos;
        spacePos = oneLine.find_first_of(' ',spacePos+1);

        data.push_back(stoi(oneLine.substr(oldPos,spacePos)));//N

        oldPos = spacePos;
        spacePos = oneLine.find_first_of(' ',spacePos+1);

        data.push_back(stoi(oneLine.substr(oldPos,spacePos)));//B

        oldPos = spacePos;
        spacePos = oneLine.find_first_of(' ',spacePos+1);

        data.push_back(stoi(oneLine.substr(oldPos,spacePos)));//T

        int a;
        int b;
        int x;
        int y;
        int s;
        int f;
        int i = 0;
        
        rides = vector<Ride>();

        while(inFile)
        {
            getline(inFile,oneLine);

            if(oneLine.length() == 0)
                break;

            spacePos = oneLine.find_first_of(' ');
            oldPos = 0;
            a = stoi(oneLine.substr(oldPos,spacePos));

            oldPos = spacePos;
            spacePos = oneLine.find_first_of(' ',spacePos+1);
            b = stoi(oneLine.substr(oldPos,spacePos));

            oldPos = spacePos;
            spacePos = oneLine.find_first_of(' ',spacePos+1);
            x = stoi(oneLine.substr(oldPos,spacePos));

            oldPos = spacePos;
            spacePos = oneLine.find_first_of(' ',spacePos+1);
            y = stoi(oneLine.substr(oldPos,spacePos));

            oldPos = spacePos;
            spacePos = oneLine.find_first_of(' ',spacePos+1);
            s = stoi(oneLine.substr(oldPos,spacePos));

            oldPos = spacePos;
            spacePos = oneLine.find_first_of(' ',spacePos+1);
            f = stoi(oneLine.substr(oldPos,spacePos));

            rides.push_back(Ride(Coordinate(a,b),Coordinate(x,y),s,f,i++));
        }

        inFile.close();
    }

    vector<Ride> getRides()
    {
        return rides;
    }

    vector<int> getData()
    {
        return data;
    }
};



#endif
