#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "��� ������������ ���������, ������� ������� ����� ��������" << endl;
	int a, b, s, x;
	cout << "������� �����: ";
	cin >> x;
	s = x % 1000;
	x = x / 1000;
	b = x % 1000;
	x = x / 1000;
	a = x;
	if (s + a + b == 0)
		cout << "����";
	switch (a)
	{
	case 1:
		cout << "���� ������� ";
		break;
	case 2:
		cout << "��� �������� ";
		break;
	case 3:
		cout << "��� �������� ";
		break;
	case 4:
		cout << "������ �������� ";
		break;
	case 5:
		cout << "���� ��������� ";
		break;
	case 6:
		cout << "����� ��������� ";
		break;
	case 7:
		cout << "���� ��������� ";
		break;
	case 8:
		cout << "������ ��������� ";
		break;
	case 9:
		cout << "������ ��������� ";
		break;
	case 10:
		cout << "������ ��������� ";
		break;
	}

	x = b / 100;
	switch (x)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}

	if ((b / 10) % 10 == 1 && b % 10 > 0) {
		x = b % 10;
		switch (x)
		{
		case 1:
			cout << "����������� ";
			break;
		case 2:
			cout << "���������� ";
			break;
		case 3:
			cout << "���������� ";
			break;
		case 4:
			cout << "������������ ";
			break;
		case 5:
			cout << "���������� ";
			break;
		case 6:
			cout << "����������� ";
			break;
		case 7:
			cout << "���������� ";
			break;
		case 8:
			cout << "������������ ";
			break;
		case 9:
			cout << "������������ ";
			break;
		}
	}
	else {
		x = (b / 10) % 10;
		switch (x)
		{
		case 1:
			cout << "������ ";
			break;
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}

		x = b % 10;
		switch (x)
		{
		case 1:
			cout << "���� ";
			break;
		case 2:
			cout << "��� ";
			break;
		case 3:
			cout << "��� ";
			break;
		case 4:
			cout << "������ ";
			break;
		case 5:
			cout << "���� ";
			break;
		case 6:
			cout << "����� ";
			break;
		case 7:
			cout << "���� ";
			break;
		case 8:
			cout << "������ ";
			break;
		case 9:
			cout << "������ ";
			break;
		}
	}
	if (b > 0) {
		cout << "����� ";
	}

	x = s / 100;
	switch (x)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}

	if ((s / 10) % 10 == 1 && s % 10 > 0) {
		x = s % 10;
		switch (x)
		{
		case 1:
			cout << "����������� ";
			break;
		case 2:
			cout << "���������� ";
			break;
		case 3:
			cout << "���������� ";
			break;
		case 4:
			cout << "������������ ";
			break;
		case 5:
			cout << "���������� ";
			break;
		case 6:
			cout << "����������� ";
			break;
		case 7:
			cout << "���������� ";
			break;
		case 8:
			cout << "������������ ";
			break;
		case 9:
			cout << "������������ ";
			break;
		}
	}
	else {
		x = (s / 10) % 10;
		switch (x)
		{
		case 1:
			cout << "������ ";
			break;
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}

		x = s % 10;
		switch (x)
		{
		case 1:
			cout << "���� ";
			break;
		case 2:
			cout << "��� ";
			break;
		case 3:
			cout << "��� ";
			break;
		case 4:
			cout << "������ ";
			break;
		case 5:
			cout << "���� ";
			break;
		case 6:
			cout << "����� ";
			break;
		case 7:
			cout << "���� ";
			break;
		case 8:
			cout << "������ ";
			break;
		case 9:
			cout << "������ ";
			break;
		}
	}
}