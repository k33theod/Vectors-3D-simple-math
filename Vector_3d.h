#pragma once
#include <cmath>
#include <iostream>
#include <string> 
#include <sstream>

double getcos (double, double);

class Vector_3d
{
public:
    double x,y,z;
    
public:
    //constructors
    Vector_3d();
    Vector_3d(double, double, double);
    ~Vector_3d();
    
    //+-overloading
    Vector_3d operator+(const Vector_3d&);
    Vector_3d operator-(const Vector_3d&);
    
    bool operator==(Vector_3d&);
    
    //dot product overloading
    double operator*(const Vector_3d&);
    double dot(const Vector_3d&);
    
    //2 way * with number overloading
    friend Vector_3d operator*(double, const Vector_3d&);
    friend Vector_3d operator*(const Vector_3d&, double);
    
    //vector magnitude
    double magn();
    
    // operator<< overloading
    friend std::ostream& operator <<(std::ostream& outputStream, const Vector_3d& p)
    {
        if (p.y<0 && p.z<0)
           outputStream << p.x << "i" << p.y << "j" << p.z<<"k";
        else if(p.y>=0 && p.z<0)
            outputStream << p.x << "i+" << p.y << "j" << p.z<<"k";
        else if(p.y<0 && p.z>=0)
            outputStream << p.x << "i" << p.y << "j+" << p.z<<"k";
        else if(p.y>=0 && p.z>=0)
            outputStream << p.x << "i+" << p.y << "j+" <<p.z<<"k";
        else
            outputStream << p.x << "i+" << p.y << "j+" <<p.z<<"k";
        return outputStream;
    }
    
    //get the angle in grads between 2 vectors
    friend double get_angle(Vector_3d&, Vector_3d&); 
    // if 2 vectors are perpedicular
    bool is_ortho(Vector_3d&);
    
    // get cosines from a 3d_vector
    double cosa ();
    double cosb ();
    double cosc ();
    
    std::string get_str();
    
    // cros product is v=uxj perpedicular to both vectors u and j
    Vector_3d cross_pr(Vector_3d&);
    
    //coplanar vectors three vectors are on the same plain
    bool coplanar(Vector_3d&, Vector_3d&);
};

double paral_area(Vector_3d&, Vector_3d&);
double volume_of_paral(Vector_3d&, Vector_3d&, Vector_3d&);

