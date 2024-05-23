#include"Rectangle.h"

       
      Rectangle::Rectangle()
      {

      }

     Rectangle::Rectangle(float q2Length,float q2Width)     //overload constructor initialiasation 
     {
        length = q2Length;
        width = q2Width;   
     }  

   void Rectangle::SetDimesions(float A, float B)           //accessor method member variable initialisation
       {
           length = A;
           width = B;
       }


    float  Rectangle::GetArea()                              //area calculation member function 
       {
           
         return length * width;

       }


      Rectangle::~Rectangle()
      {

      }
      