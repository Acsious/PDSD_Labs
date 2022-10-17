#pragma once
#include<string>
using namespace std;

/// <summary>
/// структура элемента множества
/// </summary>
struct Node;

class list
{
private:
	/// <summary>
	/// голова списка
	/// </summary>
	Node* head;
public:

	/// <summary>
	/// конструктор
	/// </summary>
	list();

	/// <summary>
	/// деструктор
	/// </summary>
	~list();

	/// <summary>
	/// проверка множества на пустоту
	/// </summary>
	/// <returns>true - множество пустое, false - множество не пустое</returns>
	bool F2();

	/// <summary>
	/// проверка принадлежности элемента к множеству
	/// </summary>
	/// <param name="data">значение которое нужно проверить</param>
	/// <returns>true - значение уже есть в множестве, false - значения нет в множестве</returns>
	bool F3(int data);

	/// <summary>
	/// добавление нового элемента в множество
	/// </summary>
	/// <param name="data">значение которое необходимо добавить</param>
	/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
	/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
	/// <returns>указатель на первый элемент множества</returns>
	Node* F4(int data, int type);

	/// <summary>
	/// создание множества
	/// </summary>
	/// <param name="SIZE">размер множества</param>
	/// <param name="min">минимально возможное значение в множестве</param>
	/// <param name="max">максимально возможное значение в множестве</param>
	/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
	/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
	/// <returns>указатель на первый элемент множества</returns>
	list F5(int SIZE, int min, int max, int type);

	/// <summary>
	/// мощность множества
	/// </summary>
	/// <returns>колличество элементов в множестве</returns>
	int F6();

	/// <summary>
	/// вывод элементов множества на экран
	/// </summary>
	/// <param name="symbol">символ который будет отделять выводимые элементы друг от друга</param>
	void F7(string symbol);

	/// <summary>
	/// является ли А подмножеством Б
	/// </summary>
	/// <param name="listB">второе множество в котором будем искать подмножество</param>
	/// <returns>true - А является подмножество Б false - не является</returns>
	bool F9(list listB);

	/// <summary>
	/// равно ли множество А множеству Б
	/// </summary>
	/// <param name="listB">второе множество для сравнения</param>
	/// <returns>true - множества равны false - множества не равны</returns>
	bool F10(list listB);

	/// <summary>
	/// объединение двух множеств
	/// </summary>
	/// <param name="listB">множество с которым нужно объединить</param>
	/// <returns>новое множество</returns>
	list F11(list listB);

	/// <summary>
	/// пересечение двух множеств
	/// </summary>
	/// <param name="listB">второе множество</param>
	/// <returns>новое множество</returns>
	list F12(list listB);

	/// <summary>
	/// разность множеств
	/// </summary>
	/// <param name="listB">второе множество</param>
	/// <returns>новое множество</returns>
	list F13(list listB);

	/// <summary>
	/// симметричная разность множеств
	/// </summary>
	/// <param name="listB">второе множество</param>
	/// <returns>новое множество</returns>
	list F14(list listB);

	/// <summary>
	/// проверка корректности данных
	/// </summary>
	/// <param name="SIZE">размер множества</param>
	/// <param name="min">минимально возможное значение в множестве</param>
	/// <param name="max">максимально возможное значение в множестве</param>
	/// <returns>возможно создание такого множества или нет</returns>
	bool check(int SIZE, int min, int max);
};

