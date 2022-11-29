#include <string>
#include <iostream>
#include "sphere.h"
#include "shape.h"
#include "point.h"
#define M_PI 3.14159  /* pi */

Sphere::Sphere (string type, string color, Point center, double radius) 
    : Shape(type, color, center)
{
    this->center = center;
    this->radius = radius;
};

double Sphere::compute_volume (void){
    return (4 * M_PI * radius * radius * radius)/3;
};


