#include "point.h"
#include "shape.h"
#include "sphere.h"
#include "cone.h"
#include "box.h"

void read_objs (Shape **list){
   Shape *node;        
   double x, y, z, xx, yy, zz, rad, l, w, h; 
   string type, color, color2; 

   // initialize list
   *list = NULL;

   while (cin >> type) {

      if (type.compare ("sphere") == 0) {
        cin >> x >> y >> z >> color >> rad;

        node = new Sphere (type, color, Point (x, y, z), rad);
      }

      else if (type.compare ("box") == 0) {
        cin >> x >> y >> z >> color >> color2, l, w, h;

        node = new Box (type, color, color2, l, w, h, Point (x, y, z));
      }
   
      else if (type.compare ("cone") == 0) {

        cin >> x >> y >> z >> xx >> yy >> zz >> rad >> color >> color2;

        node = new Cone (type, color, color2, Point (x, y, z), Point (xx, yy, zz), rad);
      }

      node->next = *list;
   }
}

void print_objs (Shape *list){
    Shape *cur_shape;
    cur_shape = list;
    while(cur_shape != NULL){
        cout << "Name: " << cur_shape->type << endl;
        cur_shape->print_color();
        cur_shape->print_loc();
        cout << "Volume: " << cur_shape->compute_volume() << endl;
    }


}

int main ()
{
    Shape *list;
    read_objs (&list);
    print_objs (list);
    // add loop here to return any allocated space to the system
    return (0);
}