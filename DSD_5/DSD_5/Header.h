#pragma once
#include<string>
#include <iostream>
#include <iterator>
#include <set>
using namespace std;


class setClass
{
private:
	set<int> mnojestvo;
public:

	/// <summary>
	/// �����������
	/// </summary>
	setClass();

	/// <summary>
	/// ����������
	/// </summary>
	~setClass();


	/// <summary>
	/// �������� ��������� �� �������
	/// </summary>
	/// <param name="set">��������� ������� ����� ���������</param>
	/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
	bool F2();

	/// <summary>
	/// �������� �������������� �������� � ���������
	/// </summary>
	/// <param name="data">�������� ������� ����� ���������</param>
	/// <param name="set">��������� ������� ����� ���������</param>
	/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
	bool F3(int data);

	/// <summary>
	/// ���������� ������ �������� � ���������
	/// </summary>
	/// <param name="set">��������� � ������� ����������� ����������</param>
	/// <param name="data">�������� ������� ���������� ��������</param>
	/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
	/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
	/// <returns>��������� � ������� ��� �������� �������</returns>
	void F4(int data, int type);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <param name="SIZE">������ ���������</param>
	/// <param name="min">���������� ��������� �������� � ���������</param>
	/// <param name="max">����������� ��������� �������� � ���������</param>
	/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
	/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
	/// <returns>��������� ���������</returns>
	set<int> F5(int SIZE, int min, int max, int type);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <param name="set">��������� ��� ��������</param>
	/// <returns>����������� ��������� � ���������</returns>
	int F6();

	/// <summary>
	/// ����� ��������� ��������� �� �����
	/// </summary>
	/// <param name="set">��������� ��� ������</param>
	/// <param name="symbol">������ ������� ����� �������� ��������� �������� ���� �� �����</param>
	void F7(string symbol);

	/// <summary>
	/// �������� �� � ������������� �
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>true - � �������� ������������ � false - �� ��������</returns>
	bool F9(setClass setA, setClass setB);

	/// <summary>
	/// ����� �� ��������� � ��������� �
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>true - ��������� ����� false - ��������� �� �����</returns>
	bool F10(setClass listA, setClass listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	setClass F11(setClass listA, setClass listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	setClass F12(setClass listA, setClass listB);

	/// <summary>
	/// �������� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	setClass F13(setClass listA, setClass listB);

	/// <summary>
	/// ������������ �������� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	setClass F14(setClass listA, setClass listB);

	/// <summary>
	/// �������� ������������ ������
	/// </summary>
	/// <param name="SIZE">������ ���������</param>
	/// <param name="min">���������� ��������� �������� � ���������</param>
	/// <param name="max">����������� ��������� �������� � ���������</param>
	/// <returns>�������� �������� ������ ��������� ��� ���</returns>
	bool check(int SIZE, int min, int max);
};
