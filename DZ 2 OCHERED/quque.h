#pragma once
#include <string>
using namespace std;

struct man
{
	char name[50];
	char sex[50];
	int age;
	char work[50];
	int income;
	char goal[50];
};
struct elem

{
	man m;
	elem* next = nullptr;
};
struct queue
{
	elem* head = nullptr;
	elem* tail = nullptr;
	size_t size = 0;
};

void enqueue(queue& queue, const char* name, const char* sex, int age, const char* work, int income, const char* goal);
bool dequeue(queue& queue, man& m);
void clear(queue& queue);
void load_data(const char* filename, queue& credit, queue& vklad);
void to_file(const char* filename, queue& q);
void show_data(queue& q);
