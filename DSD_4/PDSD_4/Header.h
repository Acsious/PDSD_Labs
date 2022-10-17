#pragma once
#include<string>
#include <iostream>
#include <iterator>
#include <list>
using namespace std;


class listClass
{
private:
	list<int> mnojestvo;
public:

	/// <summary>
	/// �����������
	/// </summary>
	listClass();

	/// <summary>
	/// ����������
	/// </summary>
	~listClass();


	/// <summary>
	/// �������� ��������� �� �������
	/// </summary>
	/// <param name="list">��������� ������� ����� ���������</param>
	/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
	bool F2();

	/// <summary>
	/// �������� �������������� �������� � ���������
	/// </summary>
	/// <param name="data">�������� ������� ����� ���������</param>
	/// <param name="list">��������� ������� ����� ���������</param>
	/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
	bool F3(int data);

	/// <summary>
	/// ���������� ������ �������� � ���������
	/// </summary>
	/// <param name="list">��������� � ������� ����������� ����������</param>
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
	list<int> F5(int SIZE, int min, int max, int type);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <param name="list">��������� ��� ��������</param>
	/// <returns>����������� ��������� � ���������</returns>
	int F6();

	/// <summary>
	/// ����� ��������� ��������� �� �����
	/// </summary>
	/// <param name="list">��������� ��� ������</param>
	/// <param name="symbol">������ ������� ����� �������� ��������� �������� ���� �� �����</param>
	void F7(string symbol);

	/// <summary>
	/// �������� �� � ������������� �
	/// </summary>
	/// <param name="setB">������ ���������</param>
	/// <returns>true - � �������� ������������ � false - �� ��������</returns>
	bool F9( listClass setB);

	/// <summary>
	/// ����� �� ��������� � ��������� �
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>true - ��������� ����� false - ��������� �� �����</returns>
	bool F10(listClass listA, listClass listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listClass F11(listClass listA, listClass listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listClass F12(listClass listA, listClass listB);

	/// <summary>
	/// �������� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listClass F13(listClass listA, listClass listB);

	/// <summary>
	/// ������������ �������� ��������
	/// </summary>
	/// <param name="setA">������ ���������</param>
	/// <param name="setB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listClass F14(listClass listA, listClass listB);

	/// <summary>
	/// �������� ������������ ������
	/// </summary>
	/// <param name="SIZE">������ ���������</param>
	/// <param name="min">���������� ��������� �������� � ���������</param>
	/// <param name="max">����������� ��������� �������� � ���������</param>
	/// <returns>�������� �������� ������ ��������� ��� ���</returns>
	bool check(int SIZE, int min, int max);
};
