#include "Rectangle.h"

Rectangle::Rectangle(){
    width = 0;
    length = 0;
}
float Rectangle::getarea(){
    return width * length;
}