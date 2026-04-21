#include "Shapes.h"
#include <cmath>


shapes::Square::Square() : side(0) {}

shapes::Square::Square(float s) : side(s) {}

void shapes::Square::setSide(float s) {
    side = s;
}

float shapes::Square::getSide() const {
    return side;
}

float shapes::Square::getArea() const {
    return side * side;
}