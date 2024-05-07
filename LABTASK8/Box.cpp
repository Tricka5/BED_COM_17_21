#pragma once 

#include "Box.h"

Box::Box() {
    length = 0.0;
    bredth = 0.0;
    height = 0.0;

}

Box::Box(const double newLength, const double newBredth, const duble newHeight) {
    length = newLength;
    bredth = newBredth;
    height = newHeight;
}
Box::~Box() {

}
double Box::GetVolume() {
    return length * bredth*height;

}
void box::Setlength(double len) {
    length = len;

}
void Box::SetBredth(double Bre) {
    bredth = bre;
}
void Box::SetHeight(double hei) {
    Height = hei;
}

Box Box::operator+(const Box& b) {
    Box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height= this->height + b.height;
    return box;
}