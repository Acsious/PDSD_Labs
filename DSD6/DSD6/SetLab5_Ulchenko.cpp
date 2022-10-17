#include <iostream>
#include<ctime>
#include<string>
#include"Header5.h"
using namespace std;

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
	return mnojestvo.empty();
}

/// <summary>
/// �������� �������������� �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ����� ���������</param>
/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
bool setClass::F3(int data)
{
	return mnojestvo.count(data);
}

/// <summary>
/// ���������� ������ �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ���������� ��������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� � ������� ��� �������� �������</returns>
void setClass::F4(int data)
{
	if (!F3(data))
	{
		mnojestvo.insert(data);
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
string setClass::F7(string symbol)
{
	string str = "";
	if (F2())
	{
		str += "��������� ������";
		return str;
	}
	iter it2 = mnojestvo.end();
	it2--;
	for (iter it = mnojestvo.begin(); it != it2; it++)
	{
		str += to_string(*it);
		str += symbol;
	}
	str += to_string(*it2);
	return str;
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
	if (setA.F9(setA, setB) && setB.F9(setB, setA))
	{
		return true;
	}
	return false;
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
				nl.F4(*it);
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
				nl.F4(*it);
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
		nl = F11(nl.F13(setA, setB), nl.F13(setB, setA));
	}
	return nl;
}


