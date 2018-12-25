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
    ofstream p2;
    stringstream fin;
public:

    reader();

    void rw(string word);

    ~reader();
};
