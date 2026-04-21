#include <cmath>
#include "Circle.h"

shapes::Circle::Circle() : radius(0) {}

shapes::Circle::Circle(float r) : radius(r) {}

void shapes::Circle::setRadius(float r) {
    radius = r;
}

float shapes::Circle::getRadius() const {
    return radius;
}

float shapes::Circle::getArea() const {
    return M_PI * radius * radius;
}