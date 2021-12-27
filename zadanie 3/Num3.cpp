#include <iostream>
using namespace std;

void f(int n, int mod)
{
    if (n < 0 || n < mod)
        return;
    if (n % mod == 0 && mod > 1) {
        cout << mod;
        n /= mod;
        cout << "*";
        f(n, mod);
    }
    else
        f(n, ++mod);
    if (n == 1)
        cout << "1";
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;

    cout << "Введите число, которое хотите разложить на простые сомножители:  ";
    cin >> n;

    n *= 1 - 2 * (n < 0);
    cout << n << " = ";
    f(n, 1);
    cout <<  endl;
}
