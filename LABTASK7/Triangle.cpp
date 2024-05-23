#include"Triangle.h"
#include<utility>

    shapes::Triangle::Triangle()
    {

    }
                                            //initialises member variables
    shapes::Triangle::Triangle(float Cbase, float Cheight)
    {
       base = Cbase;
       height = Cheight;
    }

    void shapes::Triangle::Setdimensions(float b, float h)
    {
        base = b;
        height = h;
    }

    std::pair<float, float>shapes::Triangle::Getdimensions()
    {
        return std::make_pair(base, height);
    }

    shapes::Triangle::~Triangle()
    {

    }   

    float shapes::tArea::areaCalculation(Triangle& triangle)                                   //calculates area from Triangle return values
    {
        std::pair<float, float> dimensions = triangle.Getdimensions();
        float b = dimensions.first;
        float h = dimensions.second;

        float area = (b * h) * 0.5f;

        return area;

    }