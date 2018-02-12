#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include "Header.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int task;
	do
	{
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	Определите функцию double f(double x, double y),
				которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника,
				когда две другие стороны x и y известны*/
				double side = 5., side2 = 10., side3 = Hypotenuza(&side, &side2, &side3);
				cout << "Длина гипотенузы = " << side3 << endl;

			} break;

			case 2:
			{
				/*2.	Напишите функцию double f(double x1, double y1, double x2, double y2), 
					которая вычисляет расстояние между двумя точками(xl, yl) и(x2, y2).*/
				double x1, x2, y1, y2;
				cout << "Введите значение точек х1, х2, у1, у2 - ";
				cin >> x1 >> x2 >> y1 >> y2;
				function(x1, x2, y1, y2);
			} break;

			case 3:
			{
				/*3.	Напишите несколько функций с одним именем int f(…) и с разными наборами параметров.Продемонстрируйте работу перегруженных функций*/
				int a = 10, b = 20, c = 5;
				f(b, c, a);
				f(a, b);
			} break;

			case 4:
			{
				/*4.	Напишите функцию swap(int* a, int* b), которая изменяет значения параметров
					a и b так, что новое значение a равно старому значению b и наоборот.*/
				int a = 5, b = 10;
				swap(&a, &b);
			} break;

			case 5:
			{
				/*5.	Напишите функцию swap(int& a, int& b), которая изменяет 
					значения параметров a и b так, что новое значение a равно старому значению b и наоборот*/
				int a = 5, b = 10;
				swap(a, b);
			} break;
		}
	} while (task > 0);
}