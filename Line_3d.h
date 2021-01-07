#pragma once
#include "Point.h"

class Line_3d
{
public: 
    Point_3d point;
    Vector_3d vector;
    double coords[3];
    
public: 
    Line_3d(Point_3d&, Vector_3d&);
    Line_3d(Point_3d&, Point_3d&);
    double * get_coords(); 
    bool has_point(Point_3d&);
  //hi
};

string get_line_equation(Point_3d&, Vector_3d&); 
string get_line_equation(Point_3d&, Point_3d&); 
