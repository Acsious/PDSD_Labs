#include <iostream>
#include<ctime>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	list listA, listB;
	srand(time(0));
	int SIZE = rand() % 4 + 6, SIZE1 = rand() % 4 + 6, min = 3, max = 120;

	listA.F5(SIZE, min, max, 1);
	listB.F5(SIZE1, min, max, 2);

	listA.F6();
	listB.F6();

	cout << "��������� �: ";
	listA.F7(" ");
	cout << "��������� �: ";
	listB.F7(" ");

	if (listA.F9(listB))
	{

		cout << "A �������� ������������� B" << endl;
	}
	else
	{
		cout << "A �� �������� ������������� B" << endl;
	}

	if (listA.F9(listA))
	{

		cout << "A �������� ������������� B" << endl;
	}
	else
	{
		cout << "A �� �������� ������������� A" << endl;
	}

	if (listA.F10(listB))
	{

		cout << "��������� �����" << endl;
	}
	else
	{
		cout << "��������� �� �����" << endl;
	}
	if (listA.F10(listA))
	{

		cout << "��������� �����" << endl;
	}
	else
	{
		cout << "��������� �� �����" << endl;
	}

	list ListTest;

	ListTest = listA.F11(listB);
	cout << "����������� ���� ��������: ";
	ListTest.F7(" ");

	ListTest = listA.F12(listB);
	cout << "����������� ���� ��������: ";
	ListTest.F7(" ");

	ListTest = listB.F13(listA);
	cout << "�������� ���� ��������: ";
	ListTest.F7(" ");
	ListTest = listA.F13(listB);
	cout << "�������� ���� ��������: ";
	ListTest.F7(" ");

	ListTest = listA.F14(listB);
	cout << "������������ �������� ���� ��������: ";
	ListTest.F7(" ");
}
