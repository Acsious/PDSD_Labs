#pragma once
#include<string>
using namespace std;

/// <summary>
/// ��������� �������� ���������
/// </summary>
struct Node;	

/// <summary>
/// �������� ������� ���������
/// </summary>
/// <returns>������ ������</returns>
Node* F1();	

/// <summary>
/// �������� ��������� �� �������
/// </summary>
/// <param name="ptr">��������� �� ������ ������</param>
/// <returns>true - ��������� ������, false - ��������� �� ������</returns>
bool F2(Node* ptr);

/// <summary>
/// �������� �������������� �������� � ���������
/// </summary>
/// <param name="data">�������� ������� ����� ���������</param>
/// <param name="ptr">��������� �� ������ ������</param>
/// <returns>true - �������� ��� ���� � ���������, false - �������� ��� � ���������</returns>
bool F3(int data, Node* ptr);

/// <summary>
/// ���������� ������ �������� � ���������
/// </summary>
/// <param name="head">������ ������</param>
/// <param name="data">�������� ������� ���������� ��������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� �� ������ ������� ���������</returns>
Node* F4(Node* head, int data, int type);

/// <summary>
/// �������� ���������
/// </summary>
/// <param name="SIZE">������ ���������</param>
/// <param name="min">����������� �������� � ���������</param>
/// <param name="max">������������ �������� ���������</param>
/// <param name="type">��� ���������: 1 - ��������� ����� ������� 9, 
/// 2 - ��������� ����� ������� 3, ����� ������ ����� - ��������� ��� ������������</param>
/// <returns>��������� �� ������ ������</returns>
Node* F5(int SIZE, int min, int max, int type);		

/// <summary>
/// �������� ���������
/// </summary>
/// <param name="head">������ ������</param>
/// <returns>������ ���������</returns>
int F6(Node* head);		

/// <summary>
/// ����� ��������� ��������� �� �����
/// </summary>
/// <param name="head">������ ������</param>
/// <param name="symbol">������ �����������</param>
void F7(Node* head, string symbol);	

/// <summary>
/// �������� ���������
/// </summary>
/// <param name="head">������ ���������</param>
/// <returns></returns>
Node* F8(Node* head);

/// <summary>
/// �������� �� � ������������� �
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
/// <returns></returns>
bool F9(Node* head1, Node* head2);	

/// <summary>
/// ����� �� ��������� � ��������� �
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
/// <returns></returns>
bool F10(Node* head1, Node* head2);	

/// <summary>
/// ����������� ���� ��������
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
/// <returns></returns>
Node* F11(Node* head1, Node* head2);

/// <summary>
/// ����������� ���� ��������
/// </summary>
/// <param name="head1"></param>
/// <param name="head2"></param>
/// <returns></returns>
Node* F12(Node* head1, Node* head2);

/// <summary>
/// �������� ��������
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
/// <returns></returns>
Node* F13(Node* head1, Node* head2);

/// <summary>
/// ������������ �������� ��������
/// </summary>
/// <param name="head1">������ ������� ���������</param>
/// <param name="head2">������ ������� ���������</param>
/// <returns></returns>
Node* F14(Node* head1, Node* head2);				


/// <summary>
/// �������� ������������ ������
/// </summary>
/// <param name="SIZE">������ ���������</param>
/// <param name="min">���������� ��������� �������� � ���������</param>
/// <param name="max">����������� ��������� �������� � ���������</param>
/// <returns>�������� �������� ������ ��������� ��� ���</returns>
bool check(int SIZE, int min, int max);				