#pragma once
#include "Vector_3d.h"
#include "Point.h"


//Planes in 3d space can be declared with a Point_3d and a Vector_3d
//that is orthogonal to the plane
class Plane_3d
{
public: 
    Point_3d point;
    Vector_3d normal_v;
    
    
public: 
    Plane_3d(Point_3d&, Vector_3d&);
    Plane_3d(Point_3d&, Point_3d&, Point_3d&);
    bool has_point(Point_3d&);
    string str();
    ~Plane_3d();

};

