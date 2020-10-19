#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle destructor !" << std::endl;
}

void Rectangle::introduce()
{
    std::cout << "I AM A RECTANGLE !" << std::endl;
}
double Rectangle::calculateArea()
{
    return width*height;
}
double Rectangle::calculateCircumference()
{
    return 2*(width+height);
}


// for long double
long double Rectangle::calculateArea()
{
    return width*height;
}
long double Rectangle::calculateCircumference()
{
    return 2*(width+height);
}
