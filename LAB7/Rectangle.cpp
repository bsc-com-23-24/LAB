#include "Rectangle.h"

Rectangle::Rectangle(){
    width = 0;
    length = 0;
}
void Rectangle::setWidth(float w){
    width = w;
}
void Rectangle::setLength(float l){
    length = l;
}
float Rectangle::getWidth() const{
    return width;
}
float Rectangle::getLength() const{
    return length;
}
float Rectangle::getArea() const{
    return width * length;
}