#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char* str = new char[256];
	cout << "Введите числа в одну строку через + (например 1+25+3):" << endl;
	cin >> str;
	char* temp = new char[256];
	strcpy_s(temp, 256, str);
	int sum = 0;
	char* context;
	while (char* part = strtok_s(temp, "+", &context))
	{
		sum += atoi(part);
		temp = nullptr;
	}
	cout << "Сумма чисел:" << sum << endl;
}
