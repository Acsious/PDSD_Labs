#include <iostream>
#include<ctime>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	listClass setA, setB, setTest;
	srand(time(0));
	int SIZE = rand() % 4 + 6, SIZE1 = rand() % 4 + 6, min = 3, max = 120;

	setA.F5(SIZE, min, max, 1);
	setB.F5(SIZE1, min, max, 2);

	setA.F6();
	setB.F6();

	cout << "��������� �: ";
	setA.F7(" ");
	cout << "��������� �: ";
	setB.F7(" ");

	if (setA.F9(setB))
	{
		cout << "� �������� ������������� �" << endl;
	}
	else
	{
		cout << "� �� �������� ������������� �" << endl;
	}
	if (setA.F9(setA))
	{
		cout << "� �������� ������������� A" << endl;
	}
	else
	{
		cout << "� �� �������� ������������� A" << endl;
	}

	if (setA.F10(setA, setB))
	{
		cout << "��������� �����" << endl;
	}
	else
	{
		cout << "��������� �� �����" << endl;
	}
	if (setA.F10(setA,setA))
	{
		cout << "��������� �����" << endl;
	}
	else
	{
		cout << "��������� �� �����" << endl;
	}
	setTest = setTest.F11(setA, setB);
	cout << "����������� ���� ��������: ";
	setTest.F7(" ");

	setTest = setTest.F12(setA, setB);
	cout << "����������� ���� ��������: ";
	setTest.F7(" ");

	setTest = setTest.F13(setA, setB);
	cout << "�������� ���� ��������: ";
	setTest.F7(" ");
	setTest = setTest.F13(setB, setA);
	cout << "�������� ���� ��������: ";
	setTest.F7(" ");

	setTest = setTest.F14(setA, setB);
	cout << "������������ �������� ���� ��������: ";
	setTest.F7(" ");
}