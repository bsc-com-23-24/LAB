#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Rectangle rect;
    rect.setLength(length);
    rect.setWidth(width);
    cout << "The area of the rectangle is: " << rect.getArea() << endl;
    return 0;
}