#include <iostream>
using namespace std;
#include <ctime>

void print_array(int array[], const int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

void a_progr(int* arr, const int size, int a, int d)
{
	for (int i = 0; i < 10; i++)
		*(arr++) = a + d * i;
}

void rand_per(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % size;
		for (int o=0;o<i;o++)
			if (arr[o] == arr[i])
			{
				i--;
			}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int size = 10;
	int* arr = new int[size];


	int a, d;
	cout << "Введите первый элемент арифм прогрессии: " << endl;
	cin >> a;
	cout << "Введите разность: " << endl;
	cin >> d;
	cout << "Арифметическая прогрессия: ";
	a_progr(arr, size, a, d);
	print_array(arr, size);

	cout << "Случайная перестановка: ";
	rand_per(arr, size);
	print_array(arr, size);
}
