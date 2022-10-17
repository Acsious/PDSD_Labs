#include <iostream>
#include<ctime>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	listClass setA, setB, setTest;
	srand(time(0));
	int SIZE = rand() % 4 + 6, SIZE1 = rand() % 4 + 6, min = 3, max = 120;

	setA.F5(SIZE, min, max, 1);
	setB.F5(SIZE1, min, max, 2);

	setA.F6();
	setB.F6();

	cout << "Множество А: ";
	setA.F7(" ");
	cout << "Множество Б: ";
	setB.F7(" ");

	if (setA.F9(setB))
	{
		cout << "А является подмножеством Б" << endl;
	}
	else
	{
		cout << "А не является подмножеством Б" << endl;
	}
	if (setA.F9(setA))
	{
		cout << "А является подмножеством A" << endl;
	}
	else
	{
		cout << "А не является подмножеством A" << endl;
	}

	if (setA.F10(setA, setB))
	{
		cout << "Множества равны" << endl;
	}
	else
	{
		cout << "Множества не равны" << endl;
	}
	if (setA.F10(setA,setA))
	{
		cout << "Множества равны" << endl;
	}
	else
	{
		cout << "Множества не равны" << endl;
	}
	setTest = setTest.F11(setA, setB);
	cout << "Объединение двух множеств: ";
	setTest.F7(" ");

	setTest = setTest.F12(setA, setB);
	cout << "Пересечение двух множеств: ";
	setTest.F7(" ");

	setTest = setTest.F13(setA, setB);
	cout << "Разность двух множеств: ";
	setTest.F7(" ");
	setTest = setTest.F13(setB, setA);
	cout << "Разность двух множеств: ";
	setTest.F7(" ");

	setTest = setTest.F14(setA, setB);
	cout << "Симметричная разность двух множеств: ";
	setTest.F7(" ");
}