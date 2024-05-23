#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 20;
    int c;

    if( a && b )
    {
        cout << "Line 1 - Condition is true"<< endl;
    }

    if(a || b)
    {
        cout << "Line 2 - Condtion is true" << endl;
    }
    
    //changing value of a and b
    a = 0;
    b = 10;

    if( a && b)
    {
        cout << "Line 3 -  Conditon is true"<< endl;
    }
    else
    {
        cout << "Line 4 -  condition is not true"<< endl;
    }

    if ( !( a && b))
    {
        cout << "Line 5 - Condition is true" << endl;
    }

    return 0;
}