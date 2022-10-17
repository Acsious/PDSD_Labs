#pragma once
#include<string>
using namespace std;

/// <summary>
/// ��������� �������� ���������
/// </summary>
struct Node;

class listok
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
	listok();

	/// <summary>
	/// ����������
	/// </summary>
	~listok();

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
	/// <returns>��������� �� ������ ������� ���������</returns>
	Node* F4(int data);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <param name="SIZE">������ ���������</param>
	/// <param name="min">���������� ��������� �������� � ���������</param>
	/// <param name="max">����������� ��������� �������� � ���������</param>
	/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
	/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
	/// <returns>��������� �� ������ ������� ���������</returns>
	listok F5(int SIZE, int min, int max, int type);

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <returns>����������� ��������� � ���������</returns>
	int F6();

	/// <summary>
	/// ����� ��������� ��������� �� �����
	/// </summary>
	/// <param name="symbol">������ ������� ����� �������� ��������� �������� ���� �� �����</param>
	string F7(string symbol);

	/// <summary>
	/// �������� �� � ������������� �
	/// </summary>
	/// <param name="listB">������ ��������� � ������� ����� ������ ������������</param>
	/// <returns>true - � �������� ������������ � false - �� ��������</returns>
	bool F9(listok listB);

	/// <summary>
	/// ����� �� ��������� � ��������� �
	/// </summary>
	/// <param name="listB">������ ��������� ��� ���������</param>
	/// <returns>true - ��������� ����� false - ��������� �� �����</returns>
	bool F10(listok listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="listB">��������� � ������� ����� ����������</param>
	/// <returns>����� ���������</returns>
	listok F11(listok listB);

	/// <summary>
	/// ����������� ���� ��������
	/// </summary>
	/// <param name="listB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listok F12(listok listB);

	/// <summary>
	/// �������� ��������
	/// </summary>
	/// <param name="listB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listok F13(listok listB);

	/// <summary>
	/// ������������ �������� ��������
	/// </summary>
	/// <param name="listB">������ ���������</param>
	/// <returns>����� ���������</returns>
	listok F14(listok listB);

};


