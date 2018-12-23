#pragma once

#include <iostream>
#include <sstream>
#include <fstream>

#define ERR_201 1

using namespace std;

class reader
{
private:
    ifstream p1;
    ofstream p2;
    stringstream ss;
    string temp;
public:
    reader();

    void rw();

    ~reader();
};
