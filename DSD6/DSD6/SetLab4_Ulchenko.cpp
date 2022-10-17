#include <iostream>
#include<ctime>
#include<string>
#include"Header4.h"
using namespace std;

using iter = list<int>::iterator;

listClass::listClass()
{
}

listClass::~listClass()
{
}

/// <summary>
/// проверка множества на пустоту
/// </summary>
/// <returns>true - множество пустое, false - множество не пустое</returns>
bool listClass::F2()
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
bool listClass::F3(int data)
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
void listClass::F4(int data)
{
	if (!F3(data))
	{
		mnojestvo.push_front(data);
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
list<int>listClass::F5(int SIZE, int min, int max, int type)
{
	srand(time(0));
	int cnt = 0, data, curSize = 0;
	while (cnt < SIZE)
	{
		data = min + rand() % (max - 1);
		if (data % type == 0)
		{
			F4(data);
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
int listClass::F6()
{
	return mnojestvo.size();
}

/// <summary>
/// вывод элементов множества на экран
/// </summary>
/// <param name="symbol">символ который будет отделять выводимые элементы друг от друга</param>
string listClass::F7(string symbol)
{
	iter it2 = mnojestvo.end();
	it2--;

	string str = "";
	if (F2())
	{
		str += "Множество пустое";
		return str;
	}
	for (iter it = mnojestvo.begin(); it != it2; it++)
	{
		str += to_string(*it);
		str += symbol;
	}
	str += to_string(*it2);
	return str;
}

/// <summary>
/// является ли А подмножеством Б
/// </summary>
/// <param name="setB">второе множество</param>
/// <returns>true - А является подмножество Б false - не является</returns>
bool listClass::F9(listClass setB)
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
bool listClass::F10(listClass setA, listClass setB)
{
	if (setA.F2() && setB.F2())
	{
		return true;
	}
	if (setA.F9(setB) && setB.F9(setA))
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
listClass listClass::F11(listClass setA, listClass setB)
{
	listClass nl;
	if (!setA.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			nl.F4(*it);
		}
	}
	if (!setB.F2())
	{
		for (iter it = setB.mnojestvo.begin(); it != setB.mnojestvo.end(); it++)
		{
			nl.F4(*it);
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
listClass  listClass::F12(listClass setA, listClass setB)
{
	listClass nl;
	if (!setA.F2() && !setB.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			if (setB.F3(*it))
			{
				nl.F4(*it);
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
listClass listClass::F13(listClass setA, listClass setB)
{
	listClass nl;
	if (!setA.F2() && !setB.F2())
	{
		for (iter it = setA.mnojestvo.begin(); it != setA.mnojestvo.end(); it++)
		{
			if (!setB.F3(*it))
			{
				nl.F4(*it);
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
listClass listClass::F14(listClass setA, listClass setB)
{
	listClass nl;
	if (!setA.F2() && !setB.F2())
	{
		nl = F11(nl.F13(setA, setB), nl.F13(setB, setA));
	}
	return nl;
}

