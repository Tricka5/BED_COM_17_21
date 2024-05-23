#pragma once 

#include <string>

using namespace std;

class Person
{
private:
       float mWeight;
       string mFirstName;
       int mAge;
  
public:
      Person();
      Person(string newFirstName,float newWeight,int newAge); 

      ~Person();
                                     //Overload the add operator
      float operator + (const Person& otherPerson);
      bool operator == (const Person& otherPerson);
      bool operator != (const Person& otherperson);
      bool operator <  (const Person& otherPerson);
      bool operator >  (const Person& otherPerson);

      operator int();
      operator string();
      operator float();
};