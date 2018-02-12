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
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	���������� ������� double f(double x, double y),
				������� ��������� � ���������� ����� ���������� �������������� ������������,
				����� ��� ������ ������� x � y ��������*/
				double side = 5., side2 = 10., side3 = Hypotenuza(&side, &side2, &side3);
				cout << "����� ���������� = " << side3 << endl;

			} break;

			case 2:
			{
				/*2.	�������� ������� double f(double x1, double y1, double x2, double y2), 
					������� ��������� ���������� ����� ����� �������(xl, yl) �(x2, y2).*/
				double x1, x2, y1, y2;
				cout << "������� �������� ����� �1, �2, �1, �2 - ";
				cin >> x1 >> x2 >> y1 >> y2;
				function(x1, x2, y1, y2);
			} break;

			case 3:
			{
				/*3.	�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������.����������������� ������ ������������� �������*/
				int a = 10, b = 20, c = 5;
				f(b, c, a);
				f(a, b);
			} break;

			case 4:
			{
				/*4.	�������� ������� swap(int* a, int* b), ������� �������� �������� ����������
					a � b ���, ��� ����� �������� a ����� ������� �������� b � ��������.*/
				int a = 5, b = 10;
				swap(&a, &b);
			} break;

			case 5:
			{
				/*5.	�������� ������� swap(int& a, int& b), ������� �������� 
					�������� ���������� a � b ���, ��� ����� �������� a ����� ������� �������� b � ��������*/
				int a = 5, b = 10;
				swap(a, b);
			} break;
		}
	} while (task > 0);
}