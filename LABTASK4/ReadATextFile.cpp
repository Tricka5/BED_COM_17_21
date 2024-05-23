#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string line;

    ifstream myFile("Example.txt");

    if(myFile.is_open())
    {
        while (getline(myFile,line)) 
        {
            cout << line << '\n'; /* code */
        }
        myFile.close();
    }
    else
    {
        cout << "Unable to open file"; 
    }
    
    return 0;
}