#include"Header1.h"
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
/// создание пустого множества
/// </summary>
/// <returns>голова списка</returns>
Node* F1()
{
	Node* head;
	head = NULL;
	return head;
}

/// <summary>
/// проверка множества на пустоту
/// </summary>
/// <param name="ptr">указатель на голову списка</param>
/// <returns>true - множество пустое, false - множество не пустое</returns>
bool F2(Node* ptr)
{
	return !ptr;
}

/// <summary>
/// проверка принадлежности элемента к множеству
/// </summary>
/// <param name="data">значение которое нужно проверить</param>
/// <param name="ptr">указатель на голову списка</param>
/// <returns>true - значение уже есть в множестве, false - значения нет в множестве</returns>
bool F3(int data, Node* ptr)
{
	if (F2(ptr))
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
/// <param name="head">голова списка</param>
/// <param name="data">значение которое необходимо добавить</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>указатель на первый элемент множества</returns>
Node* F4(Node* head, int data)
{
	if (data % 9 == 0)
	{
		Node* nd = new Node();
		nd->value = data;
		nd->next = head;
		head = nd;
	}
	return head;
	/*if (!F3(data, head))
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
	return head;*/
}

/// <summary>
/// создание множества
/// </summary>
/// <param name="SIZE">размер множества</param>
/// <param name="min">минимальное значение в множестве</param>
/// <param name="max">максимальное значение множества</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>указатель на голову списка</returns>
Node* F5(int SIZE, int min, int max, int type)
{
	Node* ptr = F1();
	srand(time(0));
	int cnt = 0, data, curSize = 0;

	while (cnt < SIZE)
	{
		data = min + rand() % (max - 1);
		if (data % type == 0)
		{
			ptr = F4(ptr, data);
			if (F6(ptr) != curSize)
			{
				curSize++;
				cnt++;
				ptr->next;
			}
		}
	}
	return ptr;
}

/// <summary>
/// мощность множества
/// </summary>
/// <param name="head">голова списка</param>
/// <returns>размер множества</returns>
int F6(Node* head)
{
	int size = 0;
	while (head != NULL)
	{
		size++;
		head = head->next;
	}
	return size;
}

/// <summary>
/// вывод элементов множества на экран
/// </summary>
/// <param name="head">голова списка</param>
/// <param name="symbol">символ разделитель</param>
string F7(Node* head, string symbol)
{
	string str = "";
	Node* current = head;
	if (F2(current))
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
/// удаление множества
/// </summary>
/// <param name="head">голова множества</param>
/// <returns></returns>
Node* F8(Node* head)
{
	Node* current = head;
	while (current != NULL)
	{
		current = current->next;
		head = current;
	}
	return head;
}

/// <summary>
/// является ли А подмножеством Б
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
bool F9(Node* head1, Node* head2)
{
	if (F2(head1))
	{
		return true;
	}
	if ((F2(head2)) || (F6(head1) > F6(head2)))
	{
		return false;
	}

	while (head1 != NULL)
	{
		if (!F3(head1->value, head2))
		{
			return false;
		}
		head1 = head1->next;
	}
	return true;
}

/// <summary>
/// равно ли множество А множеству Б
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
bool F10(Node* head1, Node* head2)
{
	if (F2(head1) && F2(head2))
	{
		return true;
	}
	if (F9(head1, head2) && F9(head2, head1))
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
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
Node* F11(Node* head1, Node* head2)
{
	Node* nd = F1();
	while (head2 != NULL)
	{
		nd = F4(nd, head2->value);
		head2 = head2->next;
		nd->next;
	}
	while (head1 != NULL)
	{
		nd = F4(nd, head1->value);
		head1 = head1->next;
		nd->next;
	}
	return nd;
}

/// <summary>
/// пересечение двух множеств
/// </summary>
/// <param name="head1"></param>
/// <param name="head2"></param>
/// <returns></returns>
Node* F12(Node* head1, Node* head2)
{
	Node* nd = F1();
	while (head1 != NULL)
	{
		if (F3(head1->value, head2))
		{
			nd = F4(nd, head1->value);
			nd->next;
		}
		head1 = head1->next;
	}
	return nd;
}

/// <summary>
/// разность множеств
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
Node* F13(Node* head1, Node* head2)
{
	Node* nd = F1();
	while (head1 != NULL)
	{
		if (!F3(head1->value, head2))
		{
			nd = F4(nd, head1->value);
			nd->next;
		}
		head1 = head1->next;
	}
	return nd;
}

/// <summary>
/// симметричная разность множеств
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
Node* F14(Node* head1, Node* head2)
{
	Node* nd = F1();
	Node* current = head1, * current2 = head2;
	while (current != NULL)
	{
		if (!F3(current->value, head2))
		{
			nd = F4(nd, current->value);
			nd->next;
		}
		current = current->next;
	}
	while (current2 != NULL)
	{
		if (!F3(current2->value, head1))
		{
			nd = F4(nd, current2->value);
			nd->next;
		}
		current2 = current2->next;
	}
	return nd;
}



