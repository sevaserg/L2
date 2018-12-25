#include "reader.h"

reader::reader()
{
    cout << "Class reader was created!" << endl;
}

void reader::rw(string word)
{
    string w2 = word + ".";
    string w3 = word + ",";
    int flag;
    try
    {
        p1.open("1.txt");
        if (p1.is_open())
        {
            while(!p1.eof())
            {
                stringstream sentence;
                flag = 0;
                do
                {
                    stringstream ss;
                    getline(p1,temp, ' ');
                    ss<<temp;
                    if (ss.str() == word||ss.str() == w2||ss.str() == w3)
                        {
                            flag = 1;
                        }
                    sentence<<ss.str()<<" ";
                    temp = "";
                }
                while(sentence.str()[sentence.str().length() - 2]!='.'&&!p1.eof());
                if (flag!=0)
                {
                    cout<<sentence.str()<<" ";
                }

            }
            cout<<endl;
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
