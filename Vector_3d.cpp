#include "Vector_3d.h"

//constructors
Vector_3d::Vector_3d(double a, double b, double c):x(a), y(b), z(c) {}
Vector_3d::Vector_3d() {x=0;y=0;z=0;}
Vector_3d::~Vector_3d(){}

Vector_3d Vector_3d::operator+ (const Vector_3d& param) 
{
    Vector_3d temp {0,0,0};
    temp.x = x + param.x;
    temp.y = y + param.y;
    temp.z = z + param.z;
    return temp;
} 

Vector_3d Vector_3d::operator- (const Vector_3d& param) 
{
    Vector_3d temp {0,0, 0};
    temp.x = x - param.x;
    temp.y = y - param.y;
    temp.z = z - param.z;
    return temp;
}

bool Vector_3d::operator==(Vector_3d& param) 
{
    
    if (x == param.x && y == param.y && z == param.z)
        return true;
    return false;
}

//dot product
double Vector_3d::operator* (const Vector_3d& param) 
{
    return x * param.x + y * param.y + z*param.z;
}

double Vector_3d::dot (const Vector_3d& param) 
{
    return x * param.x + y * param.y + z*param.z;
}

//mul with double
Vector_3d operator* (double c, const Vector_3d& a) 
{
    Vector_3d temp {0,0,0};
    temp.x = c*a.x ;
    temp.y = c*a.y ;
    temp.z = c*a.z ;
    return temp;
}

Vector_3d operator* (const Vector_3d& a, double c) 
{
    Vector_3d temp {0,0,0};
    temp.x = c*a.x ;
    temp.y = c*a.y ;
    temp.z = c*a.z ;
    return temp;
}

//magnitude
double Vector_3d::magn()
{
    return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}

double get_angle(Vector_3d& a, Vector_3d& b) 
{
    double gin = a.dot(b);
    double al = a.magn() * b.magn();
    return acos(gin/al)* 180.0 / M_PI;;
}


bool Vector_3d::is_ortho(Vector_3d& a)
{
    return *this*a==0;
}

double Vector_3d::cosa ()
{
    return x/this->magn();
}

double Vector_3d::cosb ()
{
    return y/this->magn();
}

double Vector_3d::cosc ()
{
    return z/this->magn();
}

double getcos (double cosa, double cosb)
{
    return 1-cosa*cosa-cosb*cosb;
}

std::string Vector_3d::get_str()
{
    std::string temp;
    temp = "<"+std::to_string(x)+","+std::to_string(y)+","+std::to_string(z)+">";
    return temp;
}

Vector_3d Vector_3d::cross_pr(Vector_3d& v)
{
    Vector_3d temp;
    temp.x=y*v.z-z*v.y;
    temp.y=-1*(x*v.z-z*v.x);
    temp.z=x*v.y-y*v.x;
    return temp;
}


double paral_area (Vector_3d& a, Vector_3d& b)
{
    return a.cross_pr(b).magn();
}

double volume_of_paral(Vector_3d& a, Vector_3d& b,Vector_3d& c )
{
    return a*b.cross_pr(c);
} 


bool Vector_3d::coplanar(Vector_3d& v1, Vector_3d& v2)
{
    return this->dot(v1.cross_pr(v2))==0;
}




