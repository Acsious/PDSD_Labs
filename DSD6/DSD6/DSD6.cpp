#include <iostream>
#include<ctime>
#include <stdlib.h>
#include<string>
#include"Header1.h"
#include"Header3.h"
#include"Header4.h"
#include"Header5.h"


using namespace std;
using Timer = unsigned int;

int main()
{
	setlocale(LC_ALL, "ru");
	int SIZE = 1501, min = 3, max = 900000000;
	Node* noll, * noll2;
	listok listA, listB;
	listClass classA, classB;
	setClass setA, setB;
	

	Timer begin = 0, end = 0;

	class TimeCollection
	{
	public: int F5, F6, F7, F9, F9_1, F10, F10_1, F11, F12, F13, F13_1, F14;
	};
	TimeCollection Lab1_2, Lab3, Lab4, Lab5;


	//////////// ОДНОСВЯЗНЫЙ СПИСОК

	begin = clock();
	noll = F5(SIZE, min, max, 3);
	end = clock();
	Lab1_2.F5 = end - begin;
	noll2 = F5(SIZE, min, max, 9);

	begin = clock();
	F6(noll);
	end = clock();
	Lab1_2.F6 = end - begin;

	begin = clock();
	F7(noll, " ");
	end = clock();
	Lab1_2.F7 = end - begin;

	begin = clock();
	F9(noll, noll2);
	end = clock();
	Lab1_2.F9 = end - begin;

	begin = clock();
	F9(noll, noll);
	end = clock();
	Lab1_2.F9_1 = end - begin;

	begin = clock();
	F10(noll, noll2);
	end = clock();
	Lab1_2.F10 = end - begin;

	begin = clock();
	F10(noll, noll);
	end = clock();
	Lab1_2.F10_1 = end - begin;

	begin = clock();
	F11(noll, noll2);
	end = clock();
	Lab1_2.F11 = end - begin;

	begin = clock();
	F12(noll, noll2);
	end = clock();
	Lab1_2.F12 = end - begin;

	begin = clock();
	F13(noll, noll2);
	end = clock();
	Lab1_2.F13 = end - begin;

	begin = clock();
	F13(noll2, noll);
	end = clock();
	Lab1_2.F13_1 = end - begin;

	begin = clock();
	F14(noll, noll2);
	end = clock();
	Lab1_2.F14 = end - begin;

	//////////// ООП

	begin = clock();
	listA.F5(SIZE, min, max, 3);
	end = clock();
	Lab3.F5 = end - begin;
	listB.F5(SIZE, min, max, 9);

	begin = clock();
	listA.F6();
	end = clock();
	Lab3.F6 = end - begin;

	begin = clock();
	listA.F7(" ");
	end = clock();
	Lab3.F7 = end - begin;

	begin = clock();
	listA.F9(listB);
	end = clock();
	Lab3.F9 = end - begin;
	begin = clock();
	listA.F9(listA);
	end = clock();
	Lab3.F9_1 = end - begin;

	begin = clock();
	listA.F10(listB);
	end = clock();
	Lab3.F10 = end - begin;
	begin = clock();
	listA.F10(listA);
	end = clock();
	Lab3.F10_1 = end - begin;

	begin = clock();
	listA.F11(listB);
	end = clock();
	Lab3.F11 = end - begin;

	begin = clock();
	listA.F12(listB);
	end = clock();
	Lab3.F12 = end - begin;

	begin = clock();
	listA.F13(listB);
	end = clock();
	Lab3.F13 = end - begin;
	begin = clock();
	listA.F13(listA);
	end = clock();
	Lab3.F13_1 = end - begin;

	begin = clock();
	listA.F14(listB);
	end = clock();
	Lab3.F14 = end - begin;

	/// list

	begin = clock();
	classA.F5(SIZE, min, max, 3);
	end = clock();
	Lab4.F5 = end - begin;
	classB.F5(SIZE, min, max, 9);

	begin = clock();
	classA.F6();
	end = clock();
	Lab4.F6 = end - begin;

	begin = clock();
	classA.F7(" ");
	end = clock();
	Lab4.F7 = end - begin;

	begin = clock();
	classA.F9(classB);
	end = clock();
	Lab4.F9 = end - begin;
	begin = clock();
	classA.F9(classA);
	end = clock();
	Lab4.F9_1 = end - begin;

	begin = clock();
	classA.F10(classA, classB);
	end = clock();
	Lab4.F10 = end - begin;
	begin = clock();
	classA.F10(classA, classA);
	end = clock();
	Lab4.F10_1 = end - begin;


	begin = clock();
	classA.F11(classA, classB);
	end = clock();
	Lab4.F11 = end - begin;

	begin = clock();
	classA.F12(classA, classB);
	end = clock();
	Lab4.F12 = end - begin;

	begin = clock();
	classA.F13(classA, classB);
	end = clock();
	Lab4.F13 = end - begin;
	begin = clock();
	classB.F13(classB, classA);
	end = clock();
	Lab4.F13_1 = end - begin;

	begin = clock();
	classA.F14(classA, classB);
	end = clock();
	Lab4.F14 = end - begin;

	//////////// SET

	begin = clock();
	setA.F5(SIZE, min, max, 3);
	end = clock();
	Lab5.F5 = end - begin;
	setB.F5(SIZE, min, max, 9);

	begin = clock();
	setA.F6();
	end = clock();
	Lab5.F6 = end - begin;

	begin = clock();
	setA.F7(" ");
	end = clock();
	Lab5.F7 = end - begin;

	begin = clock();
	setA.F9(setA, setB);
	end = clock();
	Lab5.F9 = end - begin;
	begin = clock();
	setA.F9(setA, setA);
	end = clock();
	Lab5.F9_1 = end - begin;

	begin = clock();
	setA.F10(setA, setB);
	end = clock();
	Lab5.F10 = end - begin;
	begin = clock();
	setA.F10(setA, setA);
	end = clock();
	Lab5.F10_1 = end - begin;


	begin = clock();
	setA.F11(setA, setB);
	end = clock();
	Lab5.F11 = end - begin;

	begin = clock();
	setA.F12(setA, setB);
	end = clock();
	Lab5.F12 = end - begin;

	begin = clock();
	setA.F13(setA, setB);
	end = clock();
	Lab5.F13 = end - begin;
	begin = clock();
	setB.F13(setB, setA);
	end = clock();
	Lab5.F13_1 = end - begin;

	begin = clock();
	setA.F14(setA, setB);
	end = clock();
	Lab5.F14 = end - begin;



	cout << "\t\t\tСписок\tООП\tlist\tSet\t" << endl;
	cout << "Создание множества" << "\t" << Lab1_2.F5 << "\t" << Lab3.F5 << "\t" << Lab4.F5 << "\t" << Lab5.F5 << endl;
	cout << "Мощность множества" << "\t" << Lab1_2.F6 << "\t" << Lab3.F6 << "\t" << Lab4.F6 << "\t" << Lab5.F6 << endl;
	cout << "Вывод множества" << "\t\t" << Lab1_2.F7 << "\t" << Lab3.F7 << "\t" << Lab4.F7 << "\t" << Lab5.F7 << endl;
	cout << "А подмножество Б" << "\t" << Lab1_2.F9 << "\t" << Lab3.F9 << "\t" << Lab4.F9 << "\t" << Lab5.F9 << endl;
	cout << "А подмножество А" << "\t" << Lab1_2.F9_1 << "\t" << Lab3.F9_1 << "\t" << Lab4.F9_1 << "\t" << Lab5.F9_1 << endl;
	cout << "А равно Б" << "\t\t" << Lab1_2.F10 << "\t" << Lab3.F10 << "\t" << Lab4.F10 << "\t" << Lab5.F10 << endl;
	cout << "А равно А" << "\t\t" << Lab1_2.F10_1 << "\t" << Lab3.F10_1 << "\t" << Lab4.F10_1 << "\t" << Lab5.F10_1 << endl;
	cout << "Объединение множеств" << "\t" << Lab1_2.F11 << "\t" << Lab3.F11 << "\t" << Lab4.F11 << "\t" << Lab5.F11 << endl;
	cout << "Пересечение множеств" << "\t" << Lab1_2.F12 << "\t" << Lab3.F12 << "\t" << Lab4.F12 << "\t" << Lab5.F12 << endl;
	cout << "Разность множеств" << "\t" << Lab1_2.F13 << "\t" << Lab3.F13 << "\t" << Lab4.F13 << "\t" << Lab5.F13 << endl;
	cout << "Разность множеств" << "\t" << Lab1_2.F13_1 << "\t" << Lab3.F13_1 << "\t" << Lab4.F13_1 << "\t" << Lab5.F13_1 << endl;
	cout << "Симметричная разность" << "\t" << Lab1_2.F14 << "\t" << Lab3.F14 << "\t" << Lab4.F14 << "\t" << Lab5.F14 << endl;
}


