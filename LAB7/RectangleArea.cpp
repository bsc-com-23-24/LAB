#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    float length, width;
    float length2, width2;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);
    cout << "The area of the rectangle 1 is: " << rect.getArea() << endl;

    cout << "Enter the length of the rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of the rectangle 2: ";
    cin >> width2;
    Rectangle rect2(length2, width2);
    cout << "The area of the rectangle 2 is: " << rect2.getArea() << endl;
    return 0;
}