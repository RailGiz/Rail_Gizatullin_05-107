#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Вас приветствует программа, которая выводит число прописью" << endl;
	int a, b, s, x;
	cout << "Введите число: ";
	cin >> x;
	s = x % 1000;
	x = x / 1000;
	b = x % 1000;
	x = x / 1000;
	a = x;
	if (s + a + b == 0)
	cout << "ноль";
	switch (a)
	{
	case 1:
		cout << "один миллион ";
		break;
	case 2:
		cout << "два миллиона ";
		break;
	case 3:
		cout << "три миллиона ";
		break;
	case 4:
		cout << "четыре миллиона ";
		break;
	case 5:
		cout << "пять миллионов ";
		break;
	case 6:
		cout << "шесть миллионов ";
		break;
	case 7:
		cout << "семь миллионов ";
		break;
	case 8:
		cout << "восемь миллионов ";
		break;
	case 9:
		cout << "девять миллионов ";
		break;
	case 10:
		cout << "десять миллионов ";
		break;
	}

	x = b / 100;
	switch (x)
	{
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}

	if ((b / 10) % 10 == 1 && b % 10 > 0) {
		x = b % 10;
		switch (x)
		{
		case 1:
			cout << "одиннадцать ";
			break;
		case 2:
			cout << "двенадцать ";
			break;
		case 3:
			cout << "тринадцать ";
			break;
		case 4:
			cout << "четырнадцать ";
			break;
		case 5:
			cout << "пятнадцать ";
			break;
		case 6:
			cout << "шестнадцать ";
			break;
		case 7:
			cout << "семнадцать ";
			break;
		case 8:
			cout << "восемнадцать ";
			break;
		case 9:
			cout << "девятнадцать ";
			break;
		}
	}
	else {
		x = (b / 10) % 10;
		switch (x)
		{
		case 1:
			cout << "десять ";
			break;
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}

		x = b % 10;
		switch (x)
		{
		case 1:
			cout << "один ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}
	}
	if (b > 0) {
		cout << "тысяч ";
	}

	x = s / 100;
	switch (x)
	{
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}

	if ((s / 10) % 10 == 1 && s % 10 > 0) {
		x = s % 10;
		switch (x)
		{
		case 1:
			cout << "одиннадцать ";
			break;
		case 2:
			cout << "двенадцать ";
			break;
		case 3:
			cout << "тринадцать ";
			break;
		case 4:
			cout << "четырнадцать ";
			break;
		case 5:
			cout << "пятнадцать ";
			break;
		case 6:
			cout << "шестнадцать ";
			break;
		case 7:
			cout << "семнадцать ";
			break;
		case 8:
			cout << "восемнадцать ";
			break;
		case 9:
			cout << "девятнадцать ";
			break;
		}
	}
	else {
		x = (s / 10) % 10;
		switch (x)
		{
		case 1:
			cout << "десять ";
			break;
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}

		x = s % 10;
		switch (x)
		{
		case 1:
			cout << "один ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}
	}
}
