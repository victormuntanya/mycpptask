#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle();

    // setters
    void setLength(double);
    void setWidth(double);

    // getters
    double getLength();
    double getWidth();
    double getArea();

    ~Rectangle();
};
#endif