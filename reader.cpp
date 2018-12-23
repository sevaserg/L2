#include "reader.h"


reader::reader()
{
    cout << "Class reader was created!" << endl;
}

void reader::rw()
{
    try
    {
        p1.open("1.txt");
        p2.open("2.txt");
        if (p1.is_open())
        {
            while(!p1.eof())
            {
                p1>>temp;
                if (temp == "1") temp = "one";
                if (temp == "2") temp = "two";
                if (temp == "3") temp = "three";
                if (temp == "4") temp = "four";
                if (temp == "5") temp = "five";
                if (temp == "6") temp = "six";
                if (temp == "7") temp = "seven";
                if (temp == "8") temp = "eight";
                if (temp == "9") temp = "nine";
                if (temp == "0") temp = "zero";
                ss << temp << " ";
            }
            p2<<ss.str();
        }
        else
            throw ERR_201;
    }
    catch(int err)
    {
        cout<<"Error #20"<<err<<" - file " << err << ".txt doesn't exist!"<<endl;
    }
}

reader::~reader()
{
    cout << "Class reader was deleted!" << endl;
}
