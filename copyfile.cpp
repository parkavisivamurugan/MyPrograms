#include <iostream>
#include<fstream>
using namespace std; 
int main()
{
    string line; 
    fstream file1("e.txt",ios::out|ios::app); 
    fstream file2("a.txt",ios::in); 
    if(file1.is_open()&&file2.is_open())
    {
        while(getline(file2,line) )
        {
            file1<<line<<"\n";
        } 
        file1.close();
    }
}

