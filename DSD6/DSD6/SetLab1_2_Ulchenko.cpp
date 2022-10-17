#include"Header1.h"
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
/// �������� ������� ���������
/// </summary>
/// <returns>������ ������</returns>
Node* F1()
{
	Node* head;
	head = NULL;
	return head;
}

/// <summary>
/// �������� ��������� �� �������
/// </summary>
/// <param name="ptr">��������� �� ������ ������</param>
/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
bool F2(Node* ptr)
{
	return !ptr;
}

/// <summary>
/// �������� �������������� �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ����� ���������</param>
/// <param name="ptr">��������� �� ������ ������</param>
/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
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
/// ���������� ������ �������� � ���������
/// </summary>
/// <param name="head">������ ������</param>
/// <param name="data">�������� ������� ���������� ��������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� �� ������ ������� ���������</returns>
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
/// �������� ���������
/// </summary>
/// <param name="SIZE">������ ���������</param>
/// <param name="min">����������� �������� � ���������</param>
/// <param name="max">������������ �������� ���������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� �� ������ ������</returns>
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
/// �������� ���������
/// </summary>
/// <param name="head">������ ������</param>
/// <returns>������ ���������</returns>
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
/// ����� ��������� ��������� �� �����
/// </summary>
/// <param name="head">������ ������</param>
/// <param name="symbol">������ �����������</param>
string F7(Node* head, string symbol)
{
	string str = "";
	Node* current = head;
	if (F2(current))
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
/// �������� ���������
/// </summary>
/// <param name="head">������ ���������</param>
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
/// �������� �� � ������������� �
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
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
/// ����� �� ��������� � ��������� �
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
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
/// ����������� ���� ��������
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
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
/// ����������� ���� ��������
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
/// �������� ��������
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
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
/// ������������ �������� ��������
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
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



