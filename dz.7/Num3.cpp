#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char FIO[256];
	cout << "Введите с клавиатуры в одну строку фамилию, имя и отчество, разделив их пробелом: " << endl;
	gets_s(FIO);

	char Fam[256];
	int len;
	len = strlen(FIO);
	int i = 0;
	while (FIO[i] != ' ') {
		Fam[i] = FIO[i];
		i++;
	}
	Fam[i] = '\0';
	for (i; i < len; i++) {
		if (FIO[i] == ' ') {
			cout << FIO[i + 1] << '.';
		}
	}
	cout << Fam;
}
