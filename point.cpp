#include <cmath>
#include "point.h"

double Point::length(){
    return sqrt (pow(x, 2) + pow(y, 2) + pow(z,2));
}

Point Point::operator- (Point& p){
    Point * point = new Point(x - p.x, y - p.y, z - p.z);
}

void Point::print (void){
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
}