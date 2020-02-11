#include "Vector2d.h"
#include <iostream>
#include <string>
using namespace std;
Vector2d::Vector2d()
{
	x = 0;
	y = 0;
}


Vector2d::~Vector2d()
{
}

Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	(*this).y = y;
}

Vector2d::Vector2d(double x, double y, double x2, double y2)
{
	this->x = x2-x;
	this->y = y2 - y;
}

Vector2d::Vector2d(const Vector2d &a)
{
	this->x = a.x;
	this->y = a.y;
}

void Vector2d::setx(double x)
{
	this->x = x;
}

double Vector2d::getx()
{
	return this->x;
}

void Vector2d::sety(double y)
{
	this->y = y;
}

double Vector2d::gety()
{
	return this->y;
}

//void Vector2d::print(void)
//{
//	cout << "Coordinate x = " << this->x << endl << "Coordinate y = " << this->y << endl;
//}

Vector2d Vector2d::sum(Vector2d b)
{
	Vector2d a = { x + b.x, y + b.y };
	return a;
}
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(x + v.x, y + v.y);
}

Vector2d Vector2d::sub(Vector2d b)
{
	Vector2d a = { x - b.x, y - b.y };
	return a;
}
Vector2d Vector2d::operator-(const Vector2d& v) const
{
	return Vector2d(x - v.x, y - v.y);
}

Vector2d Vector2d::mult(double b)
{
	Vector2d a = { x * b, y * b };
	return a;
}
Vector2d Vector2d::operator*(const int& v) const
{
	return Vector2d(x * v, y * v);
}

double Vector2d::scalarMult(Vector2d b)
{
	return x * b.x + y * b.y;
}
double Vector2d::operator*(const Vector2d& v) const
{
	return x * v.x + y * v.y;
}

Vector2d operator*(double r, Vector2d& v)
{
	return v * r;
}

Vector2d& Vector2d::operator++() {
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int) {
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d& Vector2d::operator--() {
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int) {
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+= (const Vector2d& v) 
{
	x += v.x;
	y += v.y;
	return *this;
}

const Vector2d& Vector2d::operator-= (const Vector2d& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

const Vector2d& Vector2d::operator*= (const double& v)
{
	x *= v;
	y *= v;
	return *this;
}
double Vector2d::lengthvector()
{
	return sqrt(x * x + y * y);
}

double Vector2d::Angletan(Vector2d b)
{
	double cosinus = this->scalarMult(b) / (this->lengthvector() * b.lengthvector());
	double sinus = sqrt(1 - cosinus * cosinus);
	return sinus / cosinus;
}

Vector2d ::operator string()
{
	string s = "(" + to_string(x)+";"+to_string(y)+")";
	return s;
}