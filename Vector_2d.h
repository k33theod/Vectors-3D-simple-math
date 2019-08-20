#pragma once
#include <cmath>
#include <iostream>
#include <string> 
#include <sstream>


class Vector_2d
{
private:
    double x,y;
public:
    //constructors
    Vector_2d();
    Vector_2d(double, double);
    ~Vector_2d();
    
    //+-overloading
    Vector_2d operator+(const Vector_2d&);
    Vector_2d operator-(const Vector_2d&);
    
    bool operator==(Vector_2d&);
    
    //dot product overloading
    double operator*(const Vector_2d&);
    double dot(const Vector_2d&);
    
    //2 way * with number overloading
    friend Vector_2d operator*(double, const Vector_2d&);
    friend Vector_2d operator*(const Vector_2d&, double);
    
    //vector magnitude
    double magn();
    
    // if 2 vectors are perpedicular
    bool is_orthogonal(const Vector_2d&);
    
    double compoalong(const Vector_2d&, const Vector_2d&);
    Vector_2d v_projection(Vector_2d&);
    
    friend std::ostream& operator <<(std::ostream& outputStream, const Vector_2d& p)
    {
       if (p.y<0)
           outputStream << p.x << "i" << p.y << "j";
        else
            outputStream << p.x << "i+" << p.y << "j";
       return outputStream;
    }
    
    friend double get_angle(Vector_2d&, Vector_2d&);
};

