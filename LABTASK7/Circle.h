#pragma once

using namespace std;

namespace shapes
{
    class Circle
    {
      private:
      float radius;

      public:

      Circle();
      
      Circle(float cRadius);

      void SetDimension(float r);

      float GetRadius();

      ~Circle();

    };

    class cArea 
    {
    public:
     static float areaCalculations(Circle& circle);
    
    };
    
};