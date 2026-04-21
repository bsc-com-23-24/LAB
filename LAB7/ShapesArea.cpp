#include <iostream>
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main() {
    cout << "Choose the shape you want to calculate the area for:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "0. Quit Program" << endl;

     int choice;
    
    while(true) {
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Please enter a number." << endl;
        continue;
        }
    
    if(choice == 0) {
        cout << "Thank you for using shapes area calculator! aurevoir!" << endl;
        return 0;
    }
    else if(choice < 0 || choice > 3) {
        cout << "Invalid choice. Please choose a valid option." << endl;
        
    }
    else if(choice == 1){
        float side;
        cout << "Enter the side length of the square: ";
        cin >> side;

        shapes::Square square(side);
        std::cout << "Square area: " << square.getArea() << std::endl;
    }
    else if(choice == 2){
        float radius;
        cout << "Enter your radius" << endl;
        cin >> radius;

        shapes::Circle circle(radius);
        std::cout << "Circle area: " << circle.getArea() << std::endl;
    }

    else if(choice == 3){
        float base;
        cout << "Enter the base of your triangle: " << endl;
        cin >> base;
        float height;
        cout << "Enter the height of your triangle: " << endl;
        cin >> height;

        shapes::Triangle Triangle(base, height);
        cout << "Triangle area: " << Triangle.getArea() << std::endl;

    }
}

    return 0;
}