/**
 * 2D Vector helper class.
 * Author : Jose Daniel Munoz et al.
 * Modified : Juan Vanegas
 */
#include <iostream>
#include <cmath>

class Vector2D{
    double v[2];
    public:
        Vector2D(double =0.0, double =0.0);
        void load(double x0, double y0);
        void show(void);
        /* @return x component*/
        double x(void){return v[0];};
        /* @return y component*/
        double y(void){return v[1];};
        /* @return nth component*/
        double & operator[](int n){return v[n];};
        Vector2D operator= (Vector2D v2);
        Vector2D operator+ (Vector2D v2);
        Vector2D operator+=(Vector2D v2);
        Vector2D operator- (Vector2D v2);
        Vector2D operator-=(Vector2D v2);
        Vector2D operator* (double a);
        Vector2D operator*=(double a);
        Vector2D operator/ (double a);
        double operator* (Vector2D v2);
        Vector2D operator^ (Vector2D v2);
        friend Vector2D operator* (double a, Vector2D v1);
        friend double norm2(Vector2D v1);
        friend double norm(Vector2D v1);
};

/* Initialize vector. Defaults to zero */
Vector2D::Vector2D(double x, double y){
    v[0] = x; v[1] = y;
}
/* Load vector values */
inline void Vector2D::load(double x0, double y0){
    v[0] = x0; v[1] = y0;
}
inline void Vector2D::show(void){
    std::cout << "(" << v[0]<< "," << v[1] << ")" << std::endl;
}
inline Vector2D Vector2D::operator=(Vector2D v2){
    v[0] = v2.v[0];
    v[1] = v2.v[1];

    return *this;
}
Vector2D Vector2D::operator+(Vector2D v2){
    Vector2D result(
        v[0]+v2.v[0],
        v[1]+v2.v[1]
    );

    return result;
}
Vector2D Vector2D::operator+=(Vector2D v2){
    *this = *this + v2;
    return *this;
}
Vector2D Vector2D::operator-(Vector2D v2){
    Vector2D result(
        v[0]-v2.v[0],
        v[1]-v2.v[1]
    );

    return result;
}
Vector2D Vector2D::operator-=(Vector2D v2){
    *this = *this - v2;
    return *this;
}
/* Vector times scalar */
Vector2D Vector2D::operator*(double a){
    Vector2D result(
        v[0]*a,
        v[1]*a
    );

    return result;
}
/* Vector times scalar */
Vector2D Vector2D::operator*=(double a){
    *this = (*this)*a;
    return *this;
}
/* Vector divided by scalar */
Vector2D Vector2D::operator/(double a){
    double inverse = 1.0/a;
    Vector2D result(
        v[0]*inverse,
        v[1]*inverse
    );

    return result;
}
/* Dot product */
double Vector2D::operator*(Vector2D v2){
    return v[0]*v2.v[0] + v[1]*v2.v[1];
}

Vector2D operator*(double a, Vector2D v1){
    Vector2D result;
    result = v1*a;
    return result;
}
/* @return vector norm squared */
double norm2(Vector2D v1){
    return v1.v[0]*v1.v[0] + v1.v[1]*v1.v[1];
}
/* @return vector norm */
double norm(Vector2D v1){
    return std::sqrt(v1.v[0]*v1.v[0] + v1.v[1]*v1.v[1]);
}
