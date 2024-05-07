#pragma one
#include <iostream>
using namespace std;

class Box {
public:
    Box();

    box(const double newLength,c const double newBredth, const double newHeight);

    ~Box();

    double GetVolume();

    void SetLength(double len);

    void SetBredth(double bre);

    void SetHeight(double hei);

    //Overload + operator to add two Box objects.
    Box operator+(const Box& b);

private:
    double lenghth; //Length of box
    double bredth;  //Bredth of abox
    double height:  // height of a box

    };