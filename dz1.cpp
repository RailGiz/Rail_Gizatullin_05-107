#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "��� ������������ ���������, ������� ����������, ��� ����� �����������" << endl;
    cout << "������� �����: ";
    int a;
    cin >> a;
    if (a >= 100 && a < 1000) cout << "��, ����� �������� �����������";
    else cout << "���, ����� �� �����������";
}