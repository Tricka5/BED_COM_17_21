#include<iostream>
#include"Square.h"
#include"Triangle.h"
#include"Circle.h"


using namespace shapes;
using namespace std;

int main()
{

    int operation;
    float sidelength,base,height,radius;


    while (true)
    {
        cout << "\nChoose operation: \n1.Calculate the area of a square \n2.Calcalute the area of a triangle \n3 Calculate the area of a circle \n4.Quit" << endl;
    
    if(cin >> operation && operation >= 1 && operation <= 4)

    switch (operation)
    {
    case 1:
       {
        cout << "Enter the square side length: ";
        cin >> sidelength;
                                                                     /*creates a square class instance and passes parameter to overload constructor return value is passed to  Sarea class*/
        Square square(sidelength);                                    
        float area = sArea::areaCalculations(square);                

        cout << "The area of the square is: " << area << endl;

        break;
       }
    case 2:
     { 
       cout << "Enter the triangle base length: ";
       cin >> base;

       cout << "Enter the triangle height: ";
       cin >> height;
                                        // triangle & tArea class instance 
       Triangle triangle(base, height);                    
       float triangleArea = tArea::areaCalculation(triangle);

       cout << "The area of the triangle is: " << triangleArea << endl;
       
       break;
      }

    case 3:
       {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
                                             //Cricle & cArea instamce
        Circle circle(radius);    
        float circleArea = cArea::areaCalculations(circle);

        cout << "The area of the circle is: "<< circleArea << endl;
        
        break;
       }

    case 4:
        return 0;
    
    default:
      break;

    }


    }
    
   return 0;
}