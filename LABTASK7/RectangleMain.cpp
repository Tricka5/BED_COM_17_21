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

    Rectangle q2Dimensions;                           //class overload constructor instance 
    q2Dimensions = Rectangle(a,b);

    cout << "The area of the rectangle is: " << q2Dimensions.GetArea() << endl;

    return 0;
}