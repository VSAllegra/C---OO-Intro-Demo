#include <string>
#include "shape.h"
#include "point.h"

using namespace std;

class Sphere: public Shape{
    private:
        Point center;
        double radius;
    public: 
        Sphere (string type, string color, Point center, double radius);

        void print_color (void);

        double compute_volume(void);

        void print_type (void) { cout << "should never be called" << endl; }
};