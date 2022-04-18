#include <string>
#include <iostream>
#include <fstream>
#include "queue.h"

using namespace std;

inline man create_elem(const char* name, const char* sex, int age, const char* work, int income, const char* goal)
{
	man m;
	strcpy_s(m.name, name);
	strcpy_s(m.sex, sex);
	m.age = age;
	strcpy_s(m.work, work);
	m.income = income;
	strcpy_s(m.goal, goal);
	return m;
}

void enqueue(queue& queue, const char* name, const char* sex, int age, const char* work, int income, const char* goal)
{
	man newm = create_elem(name, sex, age, work, income, goal);
	elem* newel = new elem;
	newel->m = newm;
	if (!queue.tail)
	{
		queue.head = queue.tail = newel;
	}
	else
	{
		queue.tail->next = newel;
		queue.tail = newel;
	}
	queue.size++;
}
bool dequeue(queue& queue, man& m)
{
	if (!queue.head)
		return false;

	m = queue.head->m;

	elem* rem = queue.head;

	queue.head = queue.head->next;
	delete rem;

	if (!queue.head) queue.tail = nullptr;
	queue.size--;
	return true;
}
void clear(queue& queue)
{
	while (queue.head)
	{
		elem* rem = queue.head;
		queue.head = queue.head->next;
		delete rem;
	}
	queue.size = 0;
	queue.tail = nullptr;
}

void load_data(const char* filename, queue& credit, queue& vklad)
{
	ifstream f(filename);
	if (f.is_open())
	{
		char* buf = new char[256];
		char* name = new char[50];
		char* sex = new char[8];
		int age;
		char* work = new char[100];
		int income;
		char* goal = new char[7];
		while (!f.eof() && !f.fail())
		{
			f.getline(buf, 256);
			sscanf_s(buf, "%49[^0-9|] | %7[^0-9|] | %d | %99[^0-9|] | %d | %6[^0-9]", name, 50, sex, 8, &age, work, 100, &income, goal, 7);
			if (!strcmp(goal, "кредит"))
				enqueue(credit, name, sex, age, work, income, goal);
			else if (!strcmp(goal, "вклад"))
				enqueue(vklad, name, sex, age, work, income, goal);
		}
		delete[] name;
		delete[] sex;
		delete[] work;
		delete[] goal;
		delete[] buf;
		f.close();
	}
	else {
		cout << "Ошибка при открытии файла на чтение";
		exit(0);
	}
}
void to_file(const char* filename, queue& q) {
	ofstream f(filename);
	if (f.is_open()) {
		while (q.size > 0)
		{
			man m;
			if (dequeue(q, m))
			{
				f << m.name << "|" << m.sex << "|" << m.age << "|" << m.work << "|" << m.income << "|" << m.goal << endl;
			}
		}
	}
	else {
		cout << "Ошибка при открытии файла на вывод";
		exit(0);
	}
	f.close();
}

void show_data(queue& q) {
	int i = 0;
	while (q.size > 0) {
		man m;
		if (dequeue(q, m)) {
			cout << ++i << ")Имя:" << m.name << " Пол:" << m.sex << " Возраст:" << m.age << " Место работы:" << m.work << " Размер дохода:" << m.income << " Цель обращения: " << m.goal;
			cout << endl;
		}
	}
}
