// Header file that reads and outputs the group members from README.md

#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void readNames(string filename){
    string line;
    ifstream myfile ("README.md");
    if (myfile.is_open()){
        while ( getline (myfile,line) ){
            cout << line << '\n';
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

#endif