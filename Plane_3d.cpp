#include "Plane_3d.h"

Plane_3d::Plane_3d(Point_3d& p, Vector_3d& v):point(p), normal_v(v){}

Plane_3d::Plane_3d(Point_3d& p1, Point_3d& p2, Point_3d& p3):point(p1)
{
    Vector_3d v1 = p1.create_vector(p2);
    Vector_3d v2 = p1.create_vector(p3);
    normal_v = v1.cross_pr(v2);
}

Plane_3d::~Plane_3d()
{
}

bool Plane_3d::has_point(Point_3d& p)
{
    return  (this->normal_v.x*(this->point.x-p.x)+ this->normal_v.y*(this->point.y-p.y)+this->normal_v.z*(this->point.z-p.z)==0);
}

string Plane_3d::str()
{
    return  to_string (this->normal_v.x)+"*(x-"+to_string(this->point.x)+")+"+ 
            to_string (this->normal_v.y)+"*(y-"+to_string(this->point.y)+")+"+ 
            to_string (this->normal_v.z)+"*(z-"+to_string(this->point.z)+")=0"; 
}