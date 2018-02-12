#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include "Header.h"
using namespace std;

double Hypotenuza(double *side, double *side2, double *side3)
{
	*side3 = sqrt(pow(*side, 2) + pow(*side, 2));
	return *side3;
}

void function(double x1, double y1, double x2, double y2)
{
	cout << "между точками x1 (" << x1 << ") и y1 (" << y1 << ") = " << abs(x1 - y1) << endl;
	cout << "между точками x2 (" << x2 << ") и y2 (" << y2 << ") = " << abs(x2 - y2) << endl;
}

void f(int a, int b)
{
	cout << "Сумма чисел " << a << " + " << b << " = " << a + b << endl;
}

void f(int b, int c, int a)
{
	cout << "Произведение чисел " << b << " * " << c << " * " << a << " = " << b * c * a << endl;
}

void swap(int *a, int *b)
{	
	cout << "До swapa a = " << *a << ", b = " << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "После swapa a = " << *a << ", b = " << *b << endl;
}

void swap(int &a, int &b)
{
	cout << "До swapa a = " << a << ", b = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "После swapa a = " << a << ", b = " << b << endl;
}