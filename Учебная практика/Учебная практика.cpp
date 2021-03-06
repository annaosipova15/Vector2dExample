﻿#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Координаты первого вектора" << endl;
	Vector2d firstv = { 5,4 };
	//firstv.print();
	cout << endl;
	cout << "Координаты второго вектора" << endl;
	Vector2d b = { 6, 8 };
	//b.print();
	cout << endl;
	cout << endl << "Меняем значения первого вектора" << endl;
	firstv.setx(8.2);
	firstv.sety(5.6);
	cout << "Координата по x = " << firstv.getx() << endl;
	cout << "Координата по y = " << firstv.gety() << endl;
	
	
	cout<<endl<<"Сложение векторов"<<endl;
	Vector2d c = firstv.sum(b);
	//c.print();
	
	cout <<endl<< "Вычитание векторов" << endl;
	c = firstv.sub(b); 
	//c.print();

	cout <<endl<< "Умножение вектора на число. Вектор с координатами:"<<endl;
	//firstv.print();
	cout << "Умножение на число 5" << endl;
	c=firstv.mult(5);
	//c.print();

	
	cout << endl<<"Скалярное умножение векторов."<< endl;
	cout << "Вектор с координатами: " << endl;
	//firstv.print();
	cout << "Второй вектор с координатами: " << endl;
	//b.print();
	cout << "Ответ: " << firstv.scalarMult(b)<< endl;

	cout << endl << "Длина вектора = " << firstv.lengthvector() << endl;
	
	cout << endl << "Тангенс угла между векторами = " << firstv.Angletan(b) << endl;
}


