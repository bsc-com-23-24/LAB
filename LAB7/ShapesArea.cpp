#include <iostream>
#include "Shapes.h"
int main() {
    shapes::Square square(5.0f);
    std::cout << "Square area: " << square.getArea() << std::endl;

    shapes::Circle circle(3.0f);
    std::cout << "Circle area: " << circle.getArea() << std::endl;

    shapes::triangle triangle(4.0f, 6.0f);
    std::cout << "Triangle area: " << triangle.getArea() << std::endl;

    return 0;
}