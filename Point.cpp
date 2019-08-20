#include "Point.h"

Point_2d::Point_2d(double a, double b):x(a), y(b){}


Point_2d::~Point_2d()
{
}

double Point_2d::distanse(Point_2d& a)
{
    return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
}

Point_3d::Point_3d(double a, double b, double c):x(a), y(b), z(c){}


Point_3d::~Point_3d()
{
}

double Point_3d::distanse(Point_3d& a)
{
    return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y)+(z-a.z)*(z-a.z));
}

Vector_3d Point_3d::create_vector(Point_3d& p)
{
  
    Vector_3d temp;
    temp.x =p.x-x;
    temp.y =p.y-y;
    temp.z =p.z-z;
    return temp;
}

