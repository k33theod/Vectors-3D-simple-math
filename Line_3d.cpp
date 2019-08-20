#include "Line_3d.h"

string get_line_equation(Point_3d& p1, Vector_3d& v1)
{
    string x = to_string(p1.x)+"+"+to_string(v1.x)+"t";
    string y = to_string(p1.y)+"+"+to_string(v1.y)+"t";
    string z = to_string(p1.z)+"+"+to_string(v1.z)+"t";
    string equation = "x = "+x+"\n"+"y = "+y+"\n"+"z = "+z+"\n";
    return equation;
}

string get_line_equation(Point_3d& p1, Point_3d& p2)
{
    Vector_3d v = p1.create_vector(p2);
    return get_line_equation(p1, v);
}

Line_3d::Line_3d(Point_3d& p, Vector_3d& v):point(p), vector(v){}
Line_3d::Line_3d(Point_3d& p1, Point_3d& p2):point(p1), vector(p1.create_vector(p2)){}
double * Line_3d::get_coords()
{
    double t;
    coords[0] = this->point.x + this->vector.x*t;
    coords[1] = this->point.y + this->vector.y*t;
    coords[0] = this->point.z + this->vector.z*t;
    return coords;
}

bool Line_3d::has_point(Point_3d& p)
{
    return  ((p.x-this->point.x)/this->vector.x==(p.y-this->point.y)/this->vector.y) && 
            ((p.x-this->point.x)/this->vector.x == (p.z-this->point.z)/this->vector.z);
}