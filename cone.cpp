#include <string>
#include <iostream>
#include "cone.h"
#include "shape.h"
#include "point.h"
#define M_PI 3.14159  /* pi */


Cone::Cone (string type, string color, string bcolor, Point center, Point apex, double radius) 
           : Shape (type, color, center)

{
   this -> bcolor = bcolor;
   this -> center = center;
   this -> apex = apex;
   this -> radius = radius;
}


void Cone::print_color (void)

{
   cout << "Color: "  << color << "  Base Color: " << bcolor << endl;
}


double Cone::compute_volume (void)

{
   Point diff;
   double h;

   diff = apex - center;
   h = diff.length ();

   return (M_PI * radius * radius * radius * h / 3);
}