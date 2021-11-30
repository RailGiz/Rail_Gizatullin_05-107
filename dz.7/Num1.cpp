#include <iostream>
#include <string.h>
using namespace std;
bool palindrom(char s[100]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) 
        // Делю на два, для оптимизации. Средний символ не влияет и может быть любым.
        if (s[i] != s[n - 1 - i])
            return false;
    return true;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    char s[100];
    cout << "Введите слово (все с маленькой буквы):" << endl;
    cin.getline(s, 100);
    if (palindrom(s))
        cout << "Палиндром " << endl;
    else
        cout << "Не палиндром" << endl;
}
