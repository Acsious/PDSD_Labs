#pragma once
#include<string>
using namespace std;

/// <summary>
/// ��������� �������� ���������
/// </summary>
struct Node;

class list
{
private:
	/// <summary>
	/// ������ ������
	/// </summary>
	Node* head;
public:

	/// <summary>
	/// �����������
	/// </summary>
	list();

	/// <summary>
	/// ����������
	/// </summary>
	~list();

	/// <summary>
	/// �������� ��������� �� �������
	/// </summary>
	/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
	bool F2();

	/// <summary>
	/// �������� �������������� �������� � ���������
	/// </summary>
	/// <param name="data">�������� ������� ����� ���������</param>
	/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
	bool F3(int data);

	/// <summary>
	/// ���������� ������ �������� � ���������
	/// </summary>
	/// <param name="data">�������� ������� ���������� ��������</param>
	/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
	/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
	/// <returns>��������� �� ������ ������� ���������</returns>
	Node* F4(int data, int type);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <param name="SIZE">������ ���������</param>
	/// <param name="min">���������� ��������� �������� � ���������</param>
	/// <param name="max">����������� ��������� �������� � ���������</param>
	/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
	/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
	/// <returns>��������� �� ������ ������� ���������</returns>
	list F5(int SIZE, int min, int max, int type);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <returns>����������� ��������� � ���������</returns>
	int F6();

	/// <summary>
	/// ����� ��������� ��������� �� �����
	/// </summary>
	/// <param name="symbol">������ ������� ����� �������� ��������� �������� ���� �� �����</param>
	void F7(string symbol);

	/// <summary>
	/// �������� �� � ������������� �
	/// </summary>
	/// <param name="listB">������ ��������� � ������� ����� ������ ������������</param>
	/// <returns>true - � �������� ������������ � false - �� ��������</returns>
	bool F9(list listB);

	/// <summary>
	/// ����� �� ��������� � ��������� �
	/// </summary>
	/// <param name="listB">������ ��������� ��� ���������</param>
	/// <returns>true - ��������� ����� false - ��������� �� �����</returns>
	bool F10(list listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="listB">��������� � ������� ����� ����������</param>
	/// <returns>����� ���������</returns>
	list F11(list listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="listB">������ ���������</param>
	/// <returns>����� ���������</returns>
	list F12(list listB);

	/// <summary>
	/// �������� ��������
	/// </summary>
	/// <param name="listB">������ ���������</param>
	/// <returns>����� ���������</returns>
	list F13(list listB);

	/// <summary>
	/// ������������ �������� ��������
	/// </summary>
	/// <param name="listB">������ ���������</param>
	/// <returns>����� ���������</returns>
	list F14(list listB);

	/// <summary>
	/// �������� ������������ ������
	/// </summary>
	/// <param name="SIZE">������ ���������</param>
	/// <param name="min">���������� ��������� �������� � ���������</param>
	/// <param name="max">����������� ��������� �������� � ���������</param>
	/// <returns>�������� �������� ������ ��������� ��� ���</returns>
	bool check(int SIZE, int min, int max);
};

