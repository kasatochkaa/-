#include "point.h"
#include <iostream>
using namespace std;
Point::Point():Point (0, 0){}

Point::Point (int a, int b)
{
   sety(b);
   setx(a);
};
Point::Point(const Point &p):Point(p.x, p.y)
{

}

void Point :: print() const
{
    cout <<endl <<"X: " << x << endl <<"Y: " << y <<endl;

}

void Point :: setx(int a)
{
    x = a;
}

void Point :: sety (int b)
{
    y = b;

}
int Point :: getx() const
    return x;
}
int Point :: gety() const
{
    return y;
}
