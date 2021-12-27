#include <iostream>
using namespace std;

int FOO(int bin, int m = 1)
{
    if (bin == 0)
        return 0;

    return FOO(bin / 10, m * 2) + bin % 10 * m;
}

int main()
{
    int x;
    cin >> x;
    x = FOO(x);
    cout << x << endl;
    return 0;
}
