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
                    cout<<ss.str()<<endl;
                    if (ss.str() == word||ss.str() == w2||ss.str() == w3)
                        {
                            cout<<"!!!!!";
                            flag = 1;
                        }
                    sentence<<ss.str()<<" ";
                    temp = "";
                }
                while(sentence.str()[sentence.str().length() - 2]!='.'&&!p1.eof());
                if (flag!=0)
                {
                    fin<<sentence.str()<<" ";
                }

            }
            p1.close();
            p2.open("2.txt");
            p2<<fin.str();
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
