//Author : Vinny Allegra 

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


      // If Type is Sphere
      if (type.compare ("sphere") == 0) {
        cin >> x >> y >> z >> rad >> color;

        node = new Sphere (type, color, Point (x, y, z), rad);
      }

      //If Type is Box
      else if (type.compare ("box") == 0) {
        cin >> l >> w >> h >> x >> y >> z >> color >> color2;

        node = new Box (type, color, color2, l, w, h, Point (x, y, z));
      }

      //If Type is a Cone
      else if (type.compare ("cone") == 0) {

        cin >> x >> y >> z >> xx >> yy >> zz >> rad >> color >> color2;

        node = new Cone (type, color, color2, Point (x, y, z), Point (xx, yy, zz), rad);
      }

      //Go to Next Shape in List
      node->next = *list;
      *list = node;
      }
}


void print_objs (Shape *list){
    Shape *cur_shape;
    cur_shape = list;
    cout << "Objects: " << endl;
    cout << endl;

    //Keep Printing Linked List Ends
    while(cur_shape != NULL){
        cout << "Name: " << cur_shape->type << endl;
        cur_shape->print_color();
        cur_shape->print_loc();
        cout << "Volume: " << cur_shape->compute_volume() << endl;
        cout << endl;
        cur_shape = cur_shape->next;

    }
}


int main ()
{
    Shape *list;
    Shape *head;
    read_objs (&list);
    print_objs (list);

    //Free Memory in Shape List
    while(list != NULL){
      head = list;
      list = list->next;
      delete(head);
    }

    return (0);
}