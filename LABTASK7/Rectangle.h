#pragma once 


using namespace std;

class  Rectangle
{
   private: 
        float length;
        float width;
    
    public:
       
       Rectangle();     //default constructor

       Rectangle(float lengthA,float widthB);   //overload constructor
       
       void SetDimesions(float A, float B);   // member functions
      
       float GetArea();
    
       ~Rectangle();       // default deconstructor

};
