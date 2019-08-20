#include "Point.h"

Point_2d::Point_2d(double a, double b):x(a), y(b){}


Point_2d::~Point_2d()
{
}

double Point_2d::distanse(Point_2d& a)
{
    return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
}