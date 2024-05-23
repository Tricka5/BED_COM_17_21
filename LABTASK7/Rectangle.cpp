#include"Rectangle.h"

       
      Rectangle::Rectangle()
      {

      }
     
   void Rectangle::SetDimesions(float A, float B)
       {
           length = A;
           width = B;
       }


    float  Rectangle::GetArea()
       {
           
         return length * width;

       }


      Rectangle::~Rectangle()
      {

      }
      