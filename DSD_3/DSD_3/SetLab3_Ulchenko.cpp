#include"Header.h"
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
list::list()
{
	head = NULL;
}

/// <summary>
/// деструктор
/// </summary>
list::~list()
{
}

/// <summary>
/// проверка множества на пустоту
/// </summary>
/// <returns>true - множество пустое, false - множество не пустое</returns>
bool list::F2()
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
bool list::F3(int data)
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
Node* list::F4(int data, int type)
{
	if (!F3(data))
	{
		switch (type)
		{
		case 1:
			if (data % 9 == 0)
			{
				Node* nd = new Node();
				nd->value = data;
				nd->next = head;
				head = nd;
			}
			break;
		case 2:
			if (data % 3 == 0)
			{
				Node* nd = new Node();
				nd->value = data;
				nd->next = head;
				head = nd;
			}
			break;
		default:
			Node* nd = new Node();
			nd->value = data;
			nd->next = head;
			head = nd;
			break;
		}
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
list list::F5(int SIZE, int min, int max, int type)
{
	srand(time(0));
	list ptr;
	int cnt = 0, data, curSize = 0;
	if (check(SIZE, min, max))
	{
		while (cnt < SIZE)
		{
			data = min + rand() % (max - 1);
			ptr.F4(data, type);
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
int list::F6()
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
void list::F7(string symbol)
{
	Node* current = head;
	if (F2())
	{
		cout << "Множество пустое" << endl;
		return;
	}
	while (current != NULL)
	{
		cout << current->value << symbol;
		current = current->next;
	}
	cout << endl;
}

/// <summary>
/// является ли А подмножеством Б
/// </summary>
/// <param name="listB">второе множество в котором будем искать подмножество</param>
/// <returns>true - А является подмножество Б false - не является</returns>
bool list::F9(list listB)
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
bool list::F10(list listB)
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
list list::F11(list listB)
{
	Node* current = this->head;
	list nl;
	while (listB.head != NULL)
	{
		nl.F4(listB.head->value, 5);
		listB.head = listB.head->next;
	}
	while (current != NULL)
	{
		nl.F4(current->value, 5);
		current = current->next;
	}
	return nl;
}

/// <summary>
/// пересечение двух множеств
/// </summary>
/// <param name="listB">второе множество</param>
/// <returns>новое множество</returns>
list list::F12(list listB)
{
	list nl;
	Node* current = this->head;
	while (current != NULL)
	{
		if (listB.F3(current->value))
		{
			nl.F4(current->value, 4);
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
list list::F13(list listB)
{
	list nl;
	Node* current = this->head;
	while (current != NULL)
	{
		if (!listB.F3(current->value))
		{
			nl.F4(current->value, 4);
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
list list::F14(list listB)
{
	list nl;
	Node* current = this->head;
	Node* current2 = listB.head;
	while (current != NULL)
	{
		if (!listB.F3(current->value))
		{
			nl.F4(current->value, 4);
		}
		current = current->next;
	}
	while (current2 != NULL)
	{
		if (!this->F3(current2->value))
		{
			nl.F4(current2->value, 4);
		}
		current2 = current2->next;
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
bool list::check(int SIZE, int min, int max)
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
