#ifndef POINT_H
#define POINT_H


#include <iostream>
using namespace std;

class Point
{
    double x;
    double y;
    double z;
    public:
        Point () {};
        Point (double x, double y, double z) { set (x, y, z); };
        inline void set (double x, double y, double z){this->x = x; this->y = y; this->z = z;}
        double length();
        Point operator- (Point& p);
        void print (void);
};

#endif