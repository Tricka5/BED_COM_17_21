#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream myFile("Example.txt");
    cout << data << endl;
    if (myFile.is_open())
    {
        myFile << " THIS IS A LINE.\n";
        myFile << " THIS IS ANOTHER LINE.\n";
        myFile.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    return 0;

}