#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string.h>

#define ERR_201 1

using namespace std;

class reader
{
private:
    ifstream p1;
    ofstream p2;
    stringstream fin;
    string temp;
public:

    reader();

    void rw(string word);

    ~reader();
};
