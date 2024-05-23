#include"Rectangle.h"
#include<iostream>

using namespace std;

int main()
{
    float a,b;
    cout << "Enter rectangle Length: ";
    cin >> a;

    cout << "Enter rectangle Width: ";
    cin >> b;

    Rectangle dimensions;
    dimensions.SetDimesions(a,b);

    cout << "The area of the rectangle is: " << dimensions.GetArea() << endl;

    return 0;
}