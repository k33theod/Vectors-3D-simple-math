#include "Vector_2d.h"
#include "Vector_3d.h"
#include "Point.h"
#include "Line_3d.h"
#include "Plane_3d.h"

using namespace std;

namespace d2
{
Vector_2d n {0,0}; 
const Vector_2d i {1,0};
const Vector_2d j {0,1};
}

namespace d3
{
Vector_3d n {0,0,0}; 
const Vector_3d i {1,0,0};
const Vector_3d j {0,1,0};
const Vector_3d k {0,0,1};
}

int main(int argc, char **argv)
{
	cout << "hello world\n\n";
    {
    using namespace d2;
    cout << "NAMESPACE 2D\n\n";
    Vector_2d a {2*i+ 3*j};
    Vector_2d b = a*3;
    Vector_2d c = a+b;
    
    cout << "a = 2i+3j = "<< a << endl;
    cout << "b=3*a = "<< b << endl;
    cout << "c =a+b = "<< c << endl;
    
    Vector_2d g;
    cout << "default constructor of g "<< g << endl;
    
    if(n==g)
    {
        cout<<"are equal"<<endl<<endl;
    }
    }
    {
    using namespace d3;
    cout << "NAMESPACE 3D\n\n";
    Vector_3d a {(2*i)+(3*j)+(4*k)};
    Vector_3d b = a*3;
    Vector_3d c = a+b;
    
    cout << "a = 2i+3j+4k = "<< a << endl;
    cout << "b=3*a = "<< b << endl;
    cout << "c =a+b = "<< c << endl;
    
    Vector_3d p ;
    cout << p <<endl;
    cout << "default constructor of g " << p << endl;
    
    if(n==p)
    {
        cout<<"are equal"<<endl;
    }
    }
	
    
    Point_3d p1 {2,-1,7};
    Point_3d p2 {1,-3,5};
    cout << p1.distanse(p2)<<endl;
    Vector_3d v3 = p1.create_vector(p2);
    cout << "v3 created from p1 " << p1 <<" and p2 "<<p2 <<" = v3 "<<v3 <<endl;
    
    Vector_3d v1 {2,2,-1};
    Vector_3d v2 {5,-4,2};
    
     
    cout << "v1 "<< v1 << " and v2 "<<v2 << " are perpendicular is "<< v1.is_ortho(v2)<<endl;
    
    cout<< "cross product test"<<endl;
    v1 = {1,2,3};
    v2= {-1,2,1};
    
    cout << "cross product of v1 "<<v1 <<" and v2 "<<v2<<" is "<<v1.cross_pr(v2)<<endl;
    
    cout<< "area test "<<endl;
    p1 = {1,4,6};
    p2 = {-2,5,-1};
    Point_3d p3 = {1,-1,1};
    cout << "The area of triangle of points "<<p1<<" "<<p2<<" "<<p3<<endl;
    v1=p1.create_vector(p2);
    v2=p1.create_vector(p3);
    double area = paral_area(v1,v2)/2;
    cout <<area<<endl;
    cout << 5*sqrt(82)/2<<endl;
    v3 = v1.cross_pr(v2);
    cout << "The volume of vectors "<<v1<<", "<<v2<<" and "<<v3<< " with magn "<<v3.magn() <<" is "<<volume_of_paral(v1,v2,v3) <<endl;
    
    v1 = {1,4,-7};
    v2 = {2,-1,4};
    v3 = {0,-9,18};
    
    cout << "The volume of vectors "<<v1<<", "<<v2<<" and "<<v3<<" is "<<volume_of_paral(v1,v2,v3) <<endl;

    cout << "The vector "<<v1<<", "<<v2<<" and "<<v3<<" are coplanar "<<v1.coplanar(v2,v3) <<endl;
    
    p1 = {5,-2,3};
    v1 = {3,-4,2};
    
    cout << "The equation of line that crosses point "<<p1<<" and is parallel to vector "<<v1<< " is\n"<<get_line_equation(p1, v1)<<endl;
    
    p1 = {-1,2,6};
    p2 = {2,-3,-7};
    
    cout << "The equation of line that crosses points "<<p1<<" and "<<p2<< " is\n"<<get_line_equation(p1, p2)<<endl;
    
    Line_3d l {p1,p2};
    
    Point_3d p4 {8,-13,-33};
    
    cout << "point "<<p4<<" is on the line "<<get_line_equation(p1, p2)<<" is "<<l.has_point(p4)<< endl;
    
    p1={3,-1,2};
    v1 ={4,-6,3};
    Plane_3d pl1 = {p1,v1};
    
    cout << "The equation definded by p1 "<<p1<<" and v1 "<<v1<<" is "<<pl1.str()<<endl;
    
    p1 = {1,4,6};
    p2 = {-2,5,-1};
    p3 = {1,-1,1};
    pl1= {p1,p2,p3};
    
     
    cout << "The equation definded by p1 "<<p1<<" p2 "<<p2<<" and p3 "<<p3<< " is "<< pl1.str()<<endl;
   
    
    return 0;
}
