#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

const char* obrackets = "([<{";
const char* cbrackets = ")]>}";

int is_bracket(char c)
{
    for (int i = 0; i < strlen(obrackets); i++)
        if (obrackets[i] == c)
            return i + 1;

    for (int i = 0; i < strlen(cbrackets); i++)
        if (cbrackets[i] == c)
            return -(i + 1);

    return 0;
}

int open_index(char b)
{
    for (int i = 0; i < strlen(obrackets); i++)
        if (obrackets[i] == b)
            return i;
}

int check_exp(const char* exp)
{
    Stack* brackets = nullptr;
    char val;
    int last_open_bracket = -1;

    for (size_t i = 0; i < strlen(exp); i++)
    {
        int b_type = is_bracket(exp[i]);

        if (b_type > 0) 
        {
            push(brackets, exp[i]);
            last_open_bracket = i;
        }

        else if (b_type < 0) 
            if (pop(brackets, val))
                if (cbrackets[open_index(val)] != exp[i])
                    return i;
    }

    if (brackets != nullptr)
        return last_open_bracket;

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    const char* exp1 = "{([{<}>])";
    int res = check_exp(exp1);
    cout << "Выражение номер 1: " << exp1 << endl;
    if (res == 0)
        cout << "Строка содержит корректное выражение" << endl; else
        cout << "Номер символа в строке, где содержится хотя бы одна из ошибочных скобок: " << res << endl;

    const char* exp2 = "{([{<>}])}";
    int res2 = check_exp(exp2);
    cout << "Выражение номер 2: " << exp2 << endl;
    if (res2 == 0)
        cout << "Строка содержит корректное выражение" << endl; else
        cout << "Номер символа в строке, где содержится хотя бы одна из ошибочных скобок: " << res2 << endl;
    return 0;
}
