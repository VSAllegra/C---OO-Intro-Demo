#include <cmath>
#include "point.h"

double Point::length(){
    return sqrt (pow(x, 2) + pow(y, 2) + pow(z,2));
}

Point Point::operator- (Point& p){
    Point point = Point(x - p.x, y - p.y, z - p.z);
    return point;
}

void Point::print (void){
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
}