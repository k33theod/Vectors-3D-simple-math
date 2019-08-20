#pragma once
#include <cmath>
#include <iostream>
#include <string> 
#include <sstream>
#include "Vector_3d.h"

using namespace std;

class Point_2d
{
private: double x,y;
public:
    Point_2d(double, double);
    ~Point_2d();
    double distanse(Point_2d&);
    double getx(){return x;}
    double gety() {return y;}
    
};

class Point_3d
{
public: double x,y,z;
public:
    Point_3d(double, double, double);
    ~Point_3d();
    double distanse(Point_3d&);
    Vector_3d create_vector(Point_3d&);
    
    friend std::ostream& operator <<(std::ostream& outputStream, const Point_3d& p)
    {
        outputStream << "point_3d(" << p.x << "," << p.y << "," <<p.z<<")";
        return outputStream;
    }
};

