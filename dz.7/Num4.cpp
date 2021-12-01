#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	char FILE[100];
	char R[100];

	cout << "Введите имя файла вместе с расширением (например source.cpp): ";
	gets_s(FILE);

	cout << "Введите расширение на которое хотите поменять (например .dll): ";
	gets_s(R);

	int Len;
	Len = strlen(R);
	int i = 0;
	while (FILE[i] != '.' && FILE[i] != ' ' && FILE[i] != '\0') {
		i++;
	}
	for (int j = 0; j < Len; j++) {
		FILE[i] = R[j];
		i++;
	}

	FILE[i] = '\0';
	cout << FILE;
}
