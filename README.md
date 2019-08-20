# Vectors-3D-simple-math

Implementation of some basic mathematical notions

Point_2d
its created as Point_2d p1 {x,y}
supports only one method 
p1.distanse(p2) wich returns the distance between the points p1 and p2

Point_3d
is a point in 3d space 
constructor takes 3 parameters
Point_3d p1 {x,y,z}
supports 2 methods
p1.distanse(p2) same as Point_2d objects but in 3d space
and
p1.create_vector(p2) that creates a 3d vector with magnitude the distance
between the 2 points and x,y,z the p2.x-p1.x etc
see Vector_3d bellow

Line_3d
Its a line in 3d space
constructor requires a Point_3d where the line passes and a Vector_3d to wich line is parallel
get_line_equation(p, v) get_line_equation(p1, p2) returns string the equation of line 3d created 
from point p vector v or points p1,p2
l.has_point(p) returns true if p belongs to l

Vector_2d 
its a vector in 2d space
constructor takes 2 params x,y and creates the vector object xi+yj
following operations are supported
v1+v2, v1-v2, vi*v2 or v1.dot(v2) dot product of v1 and v2
v.magn() return the magnitude of vector v
c*v or v*c vector multiplication with number c
function get_angle(v1,v2) returns angle in grads between the 2 vectors
v1.is_orthogonal(v2) returns true is the 2 vectors are perpedicular(*1)
function compoalong(v1,v2) return double the composite of v1 to v2
v1.v_projection(v2) returns vector the projection of v1 to v2
v1==v2 returns true if the 2 have the same parameters
operator<< is overloaded to return ostream of the form v.xi+v.yj

Vector_3d
A vector in 3d space 
constructor takes 3 params and creates a Vector_3d object
following operations are supported
same as Vector_2d apart form v_projection and compoalong
additional operations
(*1) v1.is_ortho(v2) same as is_orthogonal of 2d vectors
v.cosa(), v.cosb(), v.cosc() return cosines with x,y and z axes 
function getcos(cosa, cosb) returns the third cosine if 2 are given 
based on equation cosa^2+cosb^2+cosc^2=1
v1.cross_pr(v2) returns a vector that is the cross product of v1 and v2
function paral_area(v1,v2) returns the area that is formed from 2 vectors
function volume_of_paral(v1,v2,v3) returns the volume the 3 vectors make
v1.coplanar(v2,v3) returns true if v1 is coplanar to the surface v2,and v3 form

Plane_3d
A plane in space can be defined with a point_3d and a vector 
thar is perpedicular to the plane or with 3 points
Constructor works with both ways but only a point and vector are properties of the plane
pl.str() method provides a string as an equation of plane 
pl.has_point(p) method returns true if p is a point of the plane

There is no way to mix 2d and 3d objects if you wish to you should consider 2d as 3d with z parameter = 0
