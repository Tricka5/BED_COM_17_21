#include"Circle.h"


    shapes::Circle::Circle()
    {

    }
                                                      // intialises value of radius 
    shapes::Circle::Circle(float cRadius)
    {
      radius = cRadius;

    }
     
    void shapes::Circle::SetDimension(float r)
    {
        radius = r;
    }
    
     float shapes::Circle::GetRadius()
     {
        return radius;
     }

    shapes::Circle::~Circle()
    {

    } 
                                                          // calculates circle area from return value  of Cricle 
    float shapes::cArea::areaCalculations(Circle& circle)
    {
        const float pi = 3.14f; 
        float radii = circle.GetRadius();

        float area = pi * (radii * radii);

        return area;

    }