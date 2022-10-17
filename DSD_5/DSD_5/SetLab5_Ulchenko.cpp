#include <iostream>
#include<ctime>
#include<string>
#include"Header.h"
using namespace std;

//set <int> ::iterator it;
//set <int> ::iterator it2;

using iter = set<int>::iterator;


setClass::setClass()
{
}

setClass::~setClass()
{
}

/// <summary>
/// проверка множества на пустоту
/// </summary>
/// <returns>true - множество пустое, false - множество не пустое</returns>
bool setClass::F2()
{
	if (mnojestvo.empty())
	{
		return true;
	}
	return false;
}

/// <summary>
/// проверка принадлежности элемента к множеству
/// </summary>
/// <param name="data">значение которое нужно проверить</param>
/// <returns>true - значение уже есть в множестве, false - значения нет в множестве</returns>
bool setClass::F3(int data)
{
	for (iter it = mnojestvo.begin(); it != mnojestvo.end(); it++) {
		if (F2())
		{

			return false;
		}
		else
		{
			if (*it == data)
			{
				return true;
			}
		}
	}
	return false;
}

/// <summary>
/// добавление нового элемента в множество
/// </summary>
/// <param name="data">значение которое необходимо добавить</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>множество в которое был добавлен элемент</returns>
void setClass::F4(int data, int type)
{
	if (!F3(data))
	{
		switch (type)
		{
		case 1:
			if (data % 9 == 0)
			{
				mnojestvo.insert(data);
			}
			break;
		case 2:
			if (data % 3 == 0)
			{
				mnojestvo.insert(data);
			}
			break;
		default:
			mnojestvo.insert(data);
			break;
		}
	}
}

/// <summary>
/// создание множества
/// </summary>
/// <param name="SIZE">размер множества</param>
/// <param name="min">минимально возможное значение в множестве</param>
/// <param name="max">максимально возможное значение в множестве</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>созданное множество</returns>
set<int>setClass::F5(int SIZE, int min, int max, int type)
{
	srand(time(0));
	if (check(SIZE, min, max))
	{
		int cnt = 0, data, curSize = 0;
		while (cnt < SIZE)
		{
			data = min + rand() % (max - 1);
			F4(data, type);
			if (this->F6() != curSize)
			{
				curSize++;
				cnt++;
			}
		}
	}
	return mnojestvo;
}

/// <summary>
/// мощность множества
/// </summary>
/// <returns>колличество элементов в множестве</returns>
int setClass::F6()
{
	return mnojestvo.size();
}

/// <summary>
/// вывод элементов множества на экран
/// </summary>
/// <param name="symbol">символ который будет отделять выводимые элементы друг от друга</param>
void setClass::F7(string symbol)
{
	if (F2())
	{
		cout << "Множество пустое" << endl;
		return;
	}
	for (iter it = mnojestvo.begin(); it != mnojestvo.end(); it++)
	{
		cout << *it << symbol;
	}
	cout << endl;
}

/// <summary>
/// является ли А подмножеством Б
/// </summary>
/// <param name="setA">первое множество</param>
/// <param name="setB">второе множество</param>
/// <returns>true - А является подмножество Б false - не является</returns>
bool setClass::F9(setClass setA, setClass setB)
{
	if (F2())
	{
		return true;
	}

	if ((setB.F2()) || (F6() > setB.F6()))
	{
		return false;
	}

	for (iter itr = mnojestvo.begin(); itr != mnojestvo.end(); itr++)
	{
		if (!setB.F3(*itr))
		{
			return false;
		}
	}
	return true;
}

/// <summary>
/// равно ли множество А множеству Б
/// </summary>
/// <param name="setA">первое множество</param>
/// <param name="setB">второе множество</param>
/// <returns>true - множества равны false - множества не равны</returns>
bool setClass::F10(setClass setA, setClass setB)
{
	if (setA.F2() && setB.F2())
	{
		return true;
	}
	if (setA.F9(setA, setB) && setB.F9(setB, setA))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/// <summary>
/// объединение двух множеств
/// </summary>
/// <param name="setA">первое множество</param>
/// <param name="setB">второе множество</param>
/// <returns>новое множество</returns>
setClass setClass::F11(setClass setA, setClass setB)
{
	setClass nl;
	if (!setA.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			nl.F4(*it, 4);
		}
	}
	if (!setB.F2())
	{
		for (iter it = setB.mnojestvo.begin(); it != setB.mnojestvo.end(); it++)
		{
			nl.F4(*it, 4);
		}
	}
	return nl;
}

/// <summary>
/// пересечение двух множеств
/// </summary>
/// <param name="setA">первое множество</param>
/// <param name="setB">второе множество</param>
/// <returns>новое множество</returns>
setClass  setClass::F12(setClass setA, setClass setB)
{
	setClass nl;
	if (!setA.F2() && !setB.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			if (setB.F3(*it))
			{
				nl.F4(*it, 4);
			}
		}
	}
	return nl;
}

/// <summary>
/// разность множеств
/// </summary>
/// <param name="setA">первое множество</param>
/// <param name="setB">второе множество</param>
/// <returns>новое множество</returns>
setClass setClass::F13(setClass setA, setClass setB)
{
	setClass nl;
	if (!setA.F2() && !setB.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			if (!setB.F3(*it))
			{
				nl.F4(*it, 4);
			}
		}
	}
	return nl;
}

/// <summary>
/// симметричная разность множеств
/// </summary>
/// <param name="setA">первое множество</param>
/// <param name="setB">второе множество</param>
/// <returns>новое множество</returns>
setClass setClass::F14(setClass setA, setClass setB)
{
	setClass nl;
	if (!setA.F2() && !setB.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			if (!setB.F3(*it))
			{
				nl.F4(*it, 4);
			}
		}
		for (iter it = setB.mnojestvo.begin(); it != setB.mnojestvo.end(); it++)
		{
			if (!setA.F3(*it))
			{
				nl.F4(*it, 4);
			}
		}
	}
	return nl;
}

/// <summary>
/// проверка корректности данных
/// </summary>
/// <param name="SIZE">размер множества</param>
/// <param name="min">минимально возможное значение в множестве</param>
/// <param name="max">максимально возможное значение в множестве</param>
/// <returns>возможно создание такого множества или нет</returns>
bool setClass::check(int SIZE, int min, int max)
{
	if ((SIZE >= 6) && (SIZE <= 9))
	{
		if (((max - min) + 1) >= SIZE)
		{
			return true;
		}
	}
	return false;
}

