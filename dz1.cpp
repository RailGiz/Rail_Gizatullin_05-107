#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
        cout << "Вас приветствует программа, которая определяет, что число трехзначное" << endl;
    cout << "Введите число: ";
    int a;
    cin >> a;
    if (a >= 100 && a < 1000) cout << "Да, число является трехзначным"; 
    else cout << "Нет, число не трехзначное";
}
