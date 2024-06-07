#include "Polygon.h"
#include <iostream>

using namespace std;

void Polygon::SetValues(int width, int height)
{
    mWidth = width;
    mHeight = height;
}

void Polygon::PrintArea()
{
    cout << this->Area() << endl;
}

// int Polygon::Area()
// {
//     return 0;
// }
