#pragma once

#include<utility>

using namespace std;

namespace shapes
{
    class Triangle
    {
      private:
      float base;
      float height;
       
      public:
      Triangle();

      Triangle(float Cbase, float Cheight);

      void Setdimensions(float b,float h);

      std::pair<float, float>Getdimensions();

      ~Triangle();

    };


    class tArea
    {
    public:
    static float areaCalculation(Triangle& triangle);

    };


};