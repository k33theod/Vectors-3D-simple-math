#include "Vector_2d.h"

//constructors
Vector_2d::Vector_2d(double a, double b):x(a), y(b) {}
Vector_2d::Vector_2d():x(0), y(0) {}

Vector_2d Vector_2d::operator+ (const Vector_2d& param) 
{
    Vector_2d temp {0,0};
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

Vector_2d Vector_2d::operator- (const Vector_2d& param) 
{
    Vector_2d temp {0,0};
    temp.x = x - param.x;
    temp.y = y - param.y;
    return temp;
}

bool Vector_2d::operator==(Vector_2d& param) 
{
    
    if (x == param.x && y == param.y)
        return true;
    return false;
}

//dot product
double Vector_2d::operator* (const Vector_2d& param) 
{
    return x * param.x + y * param.y;
}

double Vector_2d::dot (const Vector_2d& param) 
{
    return x * param.x + y * param.y;
}

//mul with double
Vector_2d operator* (double c, const Vector_2d& a) 
{
    Vector_2d temp {0,0};
    temp.x = c*a.x ;
    temp.y = c*a.y ;
    return temp;
}

Vector_2d operator* (const Vector_2d& a, double c) 
{
    Vector_2d temp {0,0};
    temp.x = c*a.x ;
    temp.y = c*a.y ;
    return temp;
}

//magnitude
double Vector_2d::magn()
{
    return sqrt(pow(x,2)+pow(y,2));
}

//perpedicular
bool Vector_2d::is_orthogonal(const Vector_2d& a)
{
    return a.x*x+a.y*y==0;
}

double Vector_2d::compoalong(const Vector_2d& a,const Vector_2d& b)
{
    return (a.x*b.x+a.y*b.y)/sqrt(pow(b.x,2)+pow(b.y,2));
}

Vector_2d Vector_2d::v_projection(Vector_2d& a)
{
    Vector_2d temp {0,0};
    double b= x * a.x + y * a.y;;
    double c =pow(a.x,2)+pow(a.y,2);
    temp.x =b/c*a.x;
    temp.y =b/c*a.y;
    return temp;
}

Vector_2d::~Vector_2d()
{
}

double get_angle(Vector_2d& a, Vector_2d& b) 
{
        double gin = a.dot(b);
        double al = a.magn() * b.magn();
        return acos(gin/al)* 180.0 / M_PI;;
}
