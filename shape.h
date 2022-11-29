#include "point.h"

class Shape
{
    string type;
    Point loc;
    string color;
    Shape * next;
    public:
        Shape (string type, string color, Point loc);
        virtual void print_color (void);
        virtual double compute_volume (void) = 0;
        void print_type (void);
        void print_loc (void);
};