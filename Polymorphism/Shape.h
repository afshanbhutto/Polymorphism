#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>

class Shape
{
    public:
        virtual ~Shape() {std::cout << "Shape destructor !" << std::endl;};
        virtual void introduce() = 0;
        virtual double calculateArea() = 0;
        virtual double calculateCircumference() = 0;
    long double calculateShapeArea(Shape*);
long double calculateShapeCircumferece(Shape*);
};

#endif // SHAPE_H_INCLUDED
