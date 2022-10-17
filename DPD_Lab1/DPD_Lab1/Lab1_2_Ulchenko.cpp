#include <iostream>
#include<ctime>
#include<string>
#include"Header.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int SIZE = rand()%4+6, SIZE1 = rand() % 4 + 6, min = 1, max = 99;
	Node* noll, * noll2, * nlTest;

	noll = F5(SIZE, min, max, 1);
	noll2 = F5(SIZE1, min, max, 2);

	cout << "Множество А из чисел кратных 9: ";
	F7(noll, " ");
	cout << "Множество B из чисел кратных 3: ";
	F7(noll2, " ");

	if (F9(noll, noll2))
	{
		cout << "А является подмножеством Б" << endl;
	}
	else
	{
		cout << "А не являеся подмножеством Б" << endl;
	}

	if (F9(noll, noll))
	{
		cout << "А является подмножеством A" << endl;
	}
	else
	{
		cout << "А не являеся подмножеством A" << endl;
	}

	if (F10(noll, noll2))
	{
		cout << "Множества равны" << endl;
	}
	else
	{
		cout << "Множества не равны" << endl;
	}

	if (F10(noll, noll))
	{
		cout << "Множества равны" << endl;
	}
	else
	{
		cout << "Множества не равны" << endl;
	}

	cout << "Объединение двух множеств: ";
	nlTest = F11(noll, noll2);
	F7(nlTest, " ");
	
	cout << "Пересечение двух множеств: ";
	nlTest = F12(noll, noll2);
	F7(nlTest, " ");
	
	cout << "Разность двух множеств: ";
	nlTest = F13(noll, noll2);
	F7(nlTest, " ");
	cout << "Разность двух множеств: ";
	nlTest = F13(noll2, noll);
	F7(nlTest, " ");
		
	cout << "Симметричная разность двух множеств: ";
	nlTest = F14(noll, noll2);
	F7(nlTest, " ");
}


