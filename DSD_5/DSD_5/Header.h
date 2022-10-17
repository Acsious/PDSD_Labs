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
	/// конструктор
	/// </summary>
	setClass();

	/// <summary>
	/// деструктор
	/// </summary>
	~setClass();


	/// <summary>
	/// проверка множества на пустоту
	/// </summary>
	/// <param name="set">множество которое нужно проверить</param>
	/// <returns>true - множество пустое, false - множество не пустое</returns>
	bool F2();

	/// <summary>
	/// проверка принадлежности элемента к множеству
	/// </summary>
	/// <param name="data">значение которое нужно проверить</param>
	/// <param name="set">множество которое нужно проверить</param>
	/// <returns>true - значение уже есть в множестве, false - значения нет в множестве</returns>
	bool F3(int data);

	/// <summary>
	/// добавление нового элемента в множество
	/// </summary>
	/// <param name="set">множество в которое совершается добавление</param>
	/// <param name="data">значение которое необходимо добавить</param>
	/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
	/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
	/// <returns>множество в которое был добавлен элемент</returns>
	void F4(int data, int type);

	/// <summary>
	/// создание множества
	/// </summary>
	/// <param name="SIZE">размер множества</param>
	/// <param name="min">минимально возможное значение в множестве</param>
	/// <param name="max">максимально возможное значение в множестве</param>
	/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
	/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
	/// <returns>созданное множество</returns>
	set<int> F5(int SIZE, int min, int max, int type);

	/// <summary>
	/// мощность множества
	/// </summary>
	/// <param name="set">множество для проверки</param>
	/// <returns>колличество элементов в множестве</returns>
	int F6();

	/// <summary>
	/// вывод элементов множества на экран
	/// </summary>
	/// <param name="set">множество для вывода</param>
	/// <param name="symbol">символ который будет отделять выводимые элементы друг от друга</param>
	void F7(string symbol);

	/// <summary>
	/// является ли А подмножеством Б
	/// </summary>
	/// <param name="setA">первое множество</param>
	/// <param name="setB">второе множество</param>
	/// <returns>true - А является подмножество Б false - не является</returns>
	bool F9(setClass setA, setClass setB);

	/// <summary>
	/// равно ли множество А множеству Б
	/// </summary>
	/// <param name="setA">первое множество</param>
	/// <param name="setB">второе множество</param>
	/// <returns>true - множества равны false - множества не равны</returns>
	bool F10(setClass listA, setClass listB);

	/// <summary>
	/// объединение двух множеств
	/// </summary>
	/// <param name="setA">первое множество</param>
	/// <param name="setB">второе множество</param>
	/// <returns>новое множество</returns>
	setClass F11(setClass listA, setClass listB);

	/// <summary>
	/// пересечение двух множеств
	/// </summary>
	/// <param name="setA">первое множество</param>
	/// <param name="setB">второе множество</param>
	/// <returns>новое множество</returns>
	setClass F12(setClass listA, setClass listB);

	/// <summary>
	/// разность множеств
	/// </summary>
	/// <param name="setA">первое множество</param>
	/// <param name="setB">второе множество</param>
	/// <returns>новое множество</returns>
	setClass F13(setClass listA, setClass listB);

	/// <summary>
	/// симметричная разность множеств
	/// </summary>
	/// <param name="setA">первое множество</param>
	/// <param name="setB">второе множество</param>
	/// <returns>новое множество</returns>
	setClass F14(setClass listA, setClass listB);

	/// <summary>
	/// проверка корректности данных
	/// </summary>
	/// <param name="SIZE">размер множества</param>
	/// <param name="min">минимально возможное значение в множестве</param>
	/// <param name="max">максимально возможное значение в множестве</param>
	/// <returns>возможно создание такого множества или нет</returns>
	bool check(int SIZE, int min, int max);
};
