#include"Square.h"

    shapes::Square::Square()
       {

       }
                                                  // initialises value of sidelength
    shapes::Square::Square(float length)
    {
        sideLength = length;
    }

    void shapes::Square::SetDimension(double L)
    {
       sideLength = L;
    }   

    float shapes::Square::GetLength()
    {
        return sideLength;
    }


     shapes::Square::~Square()
    {

    }

    float shapes::sArea::areaCalculations( Square& slength)         //accees Square return value
    {
        float Alength = slength.GetLength();
        float Area = Alength * Alength;

        return Area;
    }
