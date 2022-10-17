#include <iostream>
#include<ctime>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	list listA, listB;
	srand(time(0));
	int SIZE = rand() % 4 + 6, SIZE1 = rand() % 4 + 6, min = 3, max = 120;

	listA.F5(SIZE, min, max, 1);
	listB.F5(SIZE1, min, max, 2);

	listA.F6();
	listB.F6();

	cout << "Множество А: ";
	listA.F7(" ");
	cout << "Множество Б: ";
	listB.F7(" ");

	if (listA.F9(listB))
	{

		cout << "A является подмножеством B" << endl;
	}
	else
	{
		cout << "A не является подмножеством B" << endl;
	}

	if (listA.F9(listA))
	{

		cout << "A является подмножеством B" << endl;
	}
	else
	{
		cout << "A не является подмножеством A" << endl;
	}

	if (listA.F10(listB))
	{

		cout << "Множества равны" << endl;
	}
	else
	{
		cout << "Множества не равны" << endl;
	}
	if (listA.F10(listA))
	{

		cout << "Множества равны" << endl;
	}
	else
	{
		cout << "Множества не равны" << endl;
	}

	list ListTest;

	ListTest = listA.F11(listB);
	cout << "Объединение двух множеств: ";
	ListTest.F7(" ");

	ListTest = listA.F12(listB);
	cout << "Пересечение двух множеств: ";
	ListTest.F7(" ");

	ListTest = listB.F13(listA);
	cout << "Разность двух множеств: ";
	ListTest.F7(" ");
	ListTest = listA.F13(listB);
	cout << "Разность двух множеств: ";
	ListTest.F7(" ");

	ListTest = listA.F14(listB);
	cout << "Симметричная разность двух множеств: ";
	ListTest.F7(" ");
}
