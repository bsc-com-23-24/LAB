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


shapes::triangle::triangle() : base(0), height(0) {}

shapes::triangle::triangle(float b, float h) : base(b), height(h) {}

void shapes::triangle::setBase(float b) {
    base = b;
}

void shapes::triangle::setHeight(float h) {
    height = h;
}

float shapes::triangle::getBase() const {
    return base;
}

float shapes::triangle::getHeight() const {
    return height;
}

float shapes::triangle::getArea() const {
    return 0.5f * base * height;
}
