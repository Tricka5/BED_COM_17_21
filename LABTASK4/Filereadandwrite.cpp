#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char data[100];

    ofstream outfile;
    outfile.open("afile.txt");

    cout << "WRITING TO THE FILE " << endl;
    cout << "ENTER YOUR NAME ";
    cin.getline(data,100);

    outfile << data << endl;

    cout << "ENTER YOUR AGE: ";
    cin >> data;
    cin.ignore();
    
    outfile << data << endl;

    outfile.close();

    ifstream infile;
    infile.open("afile.txt");

    cout << "READING FROM THE FILE" << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;

}