#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "��� ������������ ���������, ������� ���������� ������� ���� �������� �� ������ ����" << endl;
	cout << "������� ����: ";
	int d;
	cin >> d;
	cout << "������� �����: ";
	int m;
	cin >> m;
	if (m > 12 || m < 1 || d < 0 || d > 31) {
		cout << "������: ���� �������� ������";
	}
	else {
		switch (m)
		{
		case 1:
			if (d <= 31)
				cout << 365 - d + 1 << " ���� �� ������ ����";
			break;
		case 2:
			if (d <= 28)
				cout << 337 - d + 1 << " ���� �� ������ ����";
			break;
		case 3:
			if (d <= 31)
				cout << (306 - d + 1) << " ���� �� ������ ����";
			break;
		case 4:
			if (d <= 30)
				cout << (275 - d + 1) << " ���� �� ������ ����";
			break;
		case 5:
			if (d <= 31)
				cout << (245 - d + 1) << " ���� �� ������ ����";
			break;
		case 6:
			if (d <= 30)
				cout << (214 - d + 1) << " ���� �� ������ ����";
			break;
		case 7:
			if (d <= 31)
				cout << (184 - d + 1) << " ���� �� ������ ����";
			break;
		case 8:
			if (d <= 31)
				cout << (153 - d + 1) << " ���� �� ������ ����";
			break;
		case 9:
			if (d <= 30)
				cout << (122 - d + 1) << " ���� �� ������ ����";
			break;
		case 10:
			if (d <= 31)
				cout << (92 - d + 1) << " ���� �� ������ ����";
			break;
		case 11:
			if (d <= 30)
				cout << (61 - d + 1) << " ���� �� ������ ����";
			break;
		case 12:
			if (d <= 31)
				cout << (31 - d + 1) << " ���� �� ������ ����";
			break;
		default:
			cout << "������: ���� �������� ������";
		}
	}

}
