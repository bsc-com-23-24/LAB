#include "Triangle.h"

shapes::Triangle::Triangle() : base(0), height(0) {}

shapes::Triangle::Triangle(float b, float h) : base(b), height(h) {}

void shapes::Triangle::setBase(float b) {
    base = b;
}

void shapes::Triangle::setHeight(float h) {
    height = h;
}

float shapes::Triangle::getBase() const {
    return base;
}

float shapes::Triangle::getHeight() const {
    return height;
}

float shapes::Triangle::getArea() const {
    return 0.5f * base * height;
}