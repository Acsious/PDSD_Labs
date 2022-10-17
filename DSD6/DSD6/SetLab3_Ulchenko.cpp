#include"Header3.h"
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

/// <summary>
/// ��������� �������� ���������
/// </summary>
struct Node {
	int value;
	Node* next;
};

/// <summary>
/// �����������
/// </summary>
listok::listok()
{
	head = NULL;
}

/// <summary>
/// ����������
/// </summary>
listok::~listok()
{
}

/// <summary>
/// �������� ��������� �� �������
/// </summary>
/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
bool listok::F2()
{
	if (head == NULL)
	{
		return true;
	}
	return false;
}

/// <summary>
/// �������� �������������� �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ����� ���������</param>
/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
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
/// ���������� ������ �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ���������� ��������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� �� ������ ������� ���������</returns>
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
/// �������� ���������
/// </summary>
/// <param name="SIZE">������ ���������</param>
/// <param name="min">���������� ��������� �������� � ���������</param>
/// <param name="max">����������� ��������� �������� � ���������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� �� ������ ������� ���������</returns>
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
/// �������� ���������
/// </summary>
/// <returns>����������� ��������� � ���������</returns>
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
/// ����� ��������� ��������� �� �����
/// </summary>
/// <param name="symbol">������ ������� ����� �������� ��������� �������� ���� �� �����</param>
string listok::F7(string symbol)
{
	string str = "";
	Node* current = head;
	if (F2())
	{
		str += "��������� ������";
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
/// �������� �� � ������������� �
/// </summary>
/// <param name="listB">������ ��������� � ������� ����� ������ ������������</param>
/// <returns>true - � �������� ������������ � false - �� ��������</returns>
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
/// ����� �� ��������� � ��������� �
/// </summary>
/// <param name="listB">������ ��������� ��� ���������</param>
/// <returns>true - ��������� ����� false - ��������� �� �����</returns>
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
/// ����������� ���� ��������
/// </summary>
/// <param name="listB">��������� � ������� ����� ����������</param>
/// <returns>����� ���������</returns>
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
/// ����������� ���� ��������
/// </summary>
/// <param name="listB">������ ���������</param>
/// <returns>����� ���������</returns>
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
/// �������� ��������
/// </summary>
/// <param name="listB">������ ���������</param>
/// <returns>����� ���������</returns>
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
/// ������������ �������� ��������
/// </summary>
/// <param name="listB">������ ���������</param>
/// <returns>����� ���������</returns>
listok listok::F14(listok listB)
{
	listok nl, nl2 = *this;

	nl = nl2.F13(listB);
	nl = nl.F11(listB.F13(nl2));
	return nl;
}

