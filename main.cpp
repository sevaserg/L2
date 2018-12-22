#include <iostream>
#include <sstream>
#include <fstream>

#define ERR_201 1
#define ERR_202 2

using namespace std;

class reader
{
private:
    ifstream p1;
    ofstream p2;
    stringstream ss;
    string temp;
public:
    reader()
    {
        cout << "Class reader was created!" << endl;
    }

    void rw()
    {
        try
        {
            p1.open("1.txt");
            p2.open("2.txt");
            if (p1.is_open()&&p2.is_open())
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
            {
                if (!p1.is_open())
                    throw ERR_201;
                else
                    if (!p2.is_open())
                        throw ERR_202;
            }
        }
        catch(int err)
        {
                cout<<"Error #20"<<err<<" - file " << err << ".txt not found!";
        }
    }

    ~reader()
    {
        cout << "Class reader was deleted!" << endl;
    }
};

main()
{
    reader r;
    r.rw();
}
