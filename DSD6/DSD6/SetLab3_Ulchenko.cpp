#include"Header3.h"
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

/// <summary>
/// структура элемента множества
/// </summary>
struct Node {
	int value;
	Node* next;
};

/// <summary>
/// конструктор
/// </summary>
listok::listok()
{
	head = NULL;
}

/// <summary>
/// деструктор
/// </summary>
listok::~listok()
{
}

/// <summary>
/// проверка множества на пустоту
/// </summary>
/// <returns>true - множество пустое, false - множество не пустое</returns>
bool listok::F2()
{
	if (head == NULL)
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
bool listok::F3(int data)
{
	Node* ptr = head;
	if (F2())
	{
		return false;
	}
	while (ptr != NULL)
	{
		if (ptr->value == data)
		{
			return true;
		}
		ptr = ptr->next;
	}
	return false;
}

/// <summary>
/// добавление нового элемента в множество
/// </summary>
/// <param name="data">значение которое необходимо добавить</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>указатель на первый элемент множества</returns>
Node* listok::F4(int data)
{
	if (!F3(data))
	{
		Node* nd = new Node();
		nd->value = data;
		nd->next = head;
		head = nd;
	}
	return head;
}

/// <summary>
/// создание множества
/// </summary>
/// <param name="SIZE">размер множества</param>
/// <param name="min">минимально возможное значение в множестве</param>
/// <param name="max">максимально возможное значение в множестве</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>указатель на первый элемент множества</returns>
listok listok::F5(int SIZE, int min, int max, int type)
{
	srand(time(0));
	listok ptr;
	int cnt = 0, data, curSize = 0;
	while (cnt < SIZE)
	{
		data = min + rand() % (max - 1);
		if (data % type == 0)
		{
			ptr.F4(data);
			if (ptr.F6() != curSize)
			{
				curSize++;
				cnt++;
			}
		}
	}
	*this = ptr;
	return ptr;
}


/// <summary>
/// мощность множества
/// </summary>
/// <returns>колличество элементов в множестве</returns>
int listok::F6()
{
	Node* current = head;
	int size = 0;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return size;
}

/// <summary>
/// вывод элементов множества на экран
/// </summary>
/// <param name="symbol">символ который будет отделять выводимые элементы друг от друга</param>
string listok::F7(string symbol)
{
	string str = "";
	Node* current = head;
	if (F2())
	{
		str += "Множество пустое";
		return str;
	}
	while (current->next != NULL)
	{
		str += to_string(current->value);
		str += symbol;
		current = current->next;
	}
	str += to_string(current->value);
	return str;
}

/// <summary>
/// является ли А подмножеством Б
/// </summary>
/// <param name="listB">второе множество в котором будем искать подмножество</param>
/// <returns>true - А является подмножество Б false - не является</returns>
bool listok::F9(listok listB)
{
	if (F2())
	{
		return true;
	}
	if ((F6() > listB.F6()) || (F2()))
	{
		return false;
	}

	while (listB.head != NULL)
	{
		if (!F3(listB.head->value))
		{
			return false;
		}
		listB.head = listB.head->next;
	}
	return true;
}

/// <summary>
/// равно ли множество А множеству Б
/// </summary>
/// <param name="listB">второе множество для сравнения</param>
/// <returns>true - множества равны false - множества не равны</returns>
bool listok::F10(listok listB)
{
	if (F2() && listB.F2())
	{
		return true;
	}
	if (F9(*this) && F9(listB))
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
/// <param name="listB">множество с которым нужно объединить</param>
/// <returns>новое множество</returns>
listok listok::F11(listok listB)
{
	Node* current = this->head;
	listok nl;
	while (listB.head != NULL)
	{
		nl.F4(listB.head->value);
		listB.head = listB.head->next;
	}
	while (current != NULL)
	{
		nl.F4(current->value);
		current = current->next;
	}
	return nl;
}

/// <summary>
/// пересечение двух множеств
/// </summary>
/// <param name="listB">второе множество</param>
/// <returns>новое множество</returns>
listok listok::F12(listok listB)
{
	listok nl;
	Node* current = this->head;
	while (current != NULL)
	{
		if (listB.F3(current->value))
		{
			nl.F4(current->value);
		}
		current = current->next;
	}
	return nl;
}

/// <summary>
/// разность множеств
/// </summary>
/// <param name="listB">второе множество</param>
/// <returns>новое множество</returns>
listok listok::F13(listok listB)
{
	listok nl;
	Node* current = this->head;
	while (current != NULL)
	{
		if (!listB.F3(current->value))
		{
			nl.F4(current->value);
		}
		current = current->next;
	}
	return nl;
}

/// <summary>
/// симметричная разность множеств
/// </summary>
/// <param name="listB">второе множество</param>
/// <returns>новое множество</returns>
listok listok::F14(listok listB)
{
	listok nl, nl2 = *this;

	nl = nl2.F13(listB);
	nl = nl.F11(listB.F13(nl2));
	return nl;
}

