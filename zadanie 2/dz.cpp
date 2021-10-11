#include <iostream>
#include <ctime>

using namespace std;
int fib(int number)
{
	if (number < 1)
	{
		return 0;
	}
	if (number == 1)
	{
		return 1;
	}

	return fib(number - 1) + fib(number - 2);
}

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Вас приветствует программа, которая вычисляет N-ое число Фибоначчи" << endl;
	int number;
	cout << "Введите число: " << endl;
	cin >> number;
	cout << number << " по счету число Фибоначчи равняется: " << fib(number) << endl;
}