#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point p;
    Point p2(p);
    p2.print();
    p.print();
    Point p1(25, 78);
    p1.print();
    p1.getx();
    cout << "get\n";
    cout << p1.getx() <<"\n";
    p1.gety();
    cout << p1.gety() <<"\n";

    return 0;

}
