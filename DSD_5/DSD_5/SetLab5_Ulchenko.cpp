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
/// �������� ��������� �� �������
/// </summary>
/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
bool setClass::F2()
{
	if (mnojestvo.empty())
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
/// ���������� ������ �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ���������� ��������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� � ������� ��� �������� �������</returns>
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
/// �������� ���������
/// </summary>
/// <param name="SIZE">������ ���������</param>
/// <param name="min">���������� ��������� �������� � ���������</param>
/// <param name="max">����������� ��������� �������� � ���������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� ���������</returns>
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
/// �������� ���������
/// </summary>
/// <returns>����������� ��������� � ���������</returns>
int setClass::F6()
{
	return mnojestvo.size();
}

/// <summary>
/// ����� ��������� ��������� �� �����
/// </summary>
/// <param name="symbol">������ ������� ����� �������� ��������� �������� ���� �� �����</param>
void setClass::F7(string symbol)
{
	if (F2())
	{
		cout << "��������� ������" << endl;
		return;
	}
	for (iter it = mnojestvo.begin(); it != mnojestvo.end(); it++)
	{
		cout << *it << symbol;
	}
	cout << endl;
}

/// <summary>
/// �������� �� � ������������� �
/// </summary>
/// <param name="setA">������ ���������</param>
/// <param name="setB">������ ���������</param>
/// <returns>true - � �������� ������������ � false - �� ��������</returns>
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
/// ����� �� ��������� � ��������� �
/// </summary>
/// <param name="setA">������ ���������</param>
/// <param name="setB">������ ���������</param>
/// <returns>true - ��������� ����� false - ��������� �� �����</returns>
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
/// ����������� ���� ��������
/// </summary>
/// <param name="setA">������ ���������</param>
/// <param name="setB">������ ���������</param>
/// <returns>����� ���������</returns>
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
/// ����������� ���� ��������
/// </summary>
/// <param name="setA">������ ���������</param>
/// <param name="setB">������ ���������</param>
/// <returns>����� ���������</returns>
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
/// �������� ��������
/// </summary>
/// <param name="setA">������ ���������</param>
/// <param name="setB">������ ���������</param>
/// <returns>����� ���������</returns>
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
/// ������������ �������� ��������
/// </summary>
/// <param name="setA">������ ���������</param>
/// <param name="setB">������ ���������</param>
/// <returns>����� ���������</returns>
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
/// �������� ������������ ������
/// </summary>
/// <param name="SIZE">������ ���������</param>
/// <param name="min">���������� ��������� �������� � ���������</param>
/// <param name="max">����������� ��������� �������� � ���������</param>
/// <returns>�������� �������� ������ ��������� ��� ���</returns>
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

