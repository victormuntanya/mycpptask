#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
protected:
    int mWidth;
    int mHeight;

public:
    void SetValues(int width, int height);
    virtual int Area() = 0;
    void PrintArea();
};

#endif