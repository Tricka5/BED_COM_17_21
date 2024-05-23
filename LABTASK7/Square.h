#pragma once

using namespace std;

namespace shapes 
{
    class Square 
    {
       private:
        float sideLength;

       public:

       Square();

       Square(float length);

        void SetDimension(double L);

        float GetLength();

       ~Square();

    };
    
    
    class sArea 
    {
    public:
     static float areaCalculations(Square& slength);
    
    };

};