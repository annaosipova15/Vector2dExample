#include "Vector2d.h"
#include <iostream>
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

void Vector2d::print(void)
{
	cout << "Coordinate x = " << this->x << endl << "Coordinate y = " << this->y << endl;
}

Vector2d Vector2d::sum(Vector2d b)
{
	Vector2d 
	x = x + b.x;
	y = y + b.y;
}

void Vector2d::sub(Vector2d b)
{
	x = x - b.x;
	y = y - b.y;
}

void Vector2d::mult(double b)
{
	x = x * b;
	y = y * b;
}

double Vector2d::scalarMult(Vector2d b)
{
	return x * b.x + y * b.y;
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