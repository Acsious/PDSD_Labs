#pragma once
#include<string>
using namespace std;

/// <summary>
/// структура элемента множества
/// </summary>
struct Node;	

/// <summary>
/// создание пустого множества
/// </summary>
/// <returns>голова списка</returns>
Node* F1();	

/// <summary>
/// проверка множества на пустоту
/// </summary>
/// <param name="ptr">указатель на голову списка</param>
/// <returns>true - множество пустое, false - множество не пустое</returns>
bool F2(Node* ptr);

/// <summary>
/// проверка принадлежности элемента к множеству
/// </summary>
/// <param name="data">значение которое нужно проверить</param>
/// <param name="ptr">указатель на голову списка</param>
/// <returns>true - значение уже есть в множестве, false - значения нет в множестве</returns>
bool F3(int data, Node* ptr);

/// <summary>
/// добавление нового элемента в множество
/// </summary>
/// <param name="head">голова списка</param>
/// <param name="data">значение которое необходимо добавить</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>указатель на первый элемент множества</returns>
Node* F4(Node* head, int data, int type);

/// <summary>
/// создание множества
/// </summary>
/// <param name="SIZE">размер множества</param>
/// <param name="min">минимальное значение в множестве</param>
/// <param name="max">максимальное значение множества</param>
/// <param name="type">тип множества: 1 - множество чисел кратных 9, 
/// 2 - множество чисел кратных 3, любое другое число - множнство без ограниечений</param>
/// <returns>указатель на голову списка</returns>
Node* F5(int SIZE, int min, int max, int type);		

/// <summary>
/// мощность множества
/// </summary>
/// <param name="head">голова списка</param>
/// <returns>размер множества</returns>
int F6(Node* head);		

/// <summary>
/// вывод элементов множества на экран
/// </summary>
/// <param name="head">голова списка</param>
/// <param name="symbol">символ разделитель</param>
void F7(Node* head, string symbol);	

/// <summary>
/// удаление множества
/// </summary>
/// <param name="head">голова множества</param>
/// <returns></returns>
Node* F8(Node* head);

/// <summary>
/// является ли А подмножеством Б
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
bool F9(Node* head1, Node* head2);	

/// <summary>
/// равно ли множество А множеству Б
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
bool F10(Node* head1, Node* head2);	

/// <summary>
/// объединение двух множеств
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
Node* F11(Node* head1, Node* head2);

/// <summary>
/// пересечение двух множеств
/// </summary>
/// <param name="head1"></param>
/// <param name="head2"></param>
/// <returns></returns>
Node* F12(Node* head1, Node* head2);

/// <summary>
/// разность множеств
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
Node* F13(Node* head1, Node* head2);

/// <summary>
/// симметричная разность множеств
/// </summary>
/// <param name="head1">голова первого множества</param>
/// <param name="head2">голова сторого множества</param>
/// <returns></returns>
Node* F14(Node* head1, Node* head2);				


/// <summary>
/// проверка корректности данных
/// </summary>
/// <param name="SIZE">размер множества</param>
/// <param name="min">минимально возможное значение в множестве</param>
/// <param name="max">максимально возможное значение в множестве</param>
/// <returns>возможно создание такого множества или нет</returns>
bool check(int SIZE, int min, int max);				