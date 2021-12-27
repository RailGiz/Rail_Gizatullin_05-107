#include <iostream>
using namespace std;

int sums[9999];
int sum_divs(int x)
{
    int s = 0;
    int d = 1;

    while (d <= x / 2)
    {
        if (x % d == 0)
            s += d;

        d++;
    }

    return s;
}


int main()
{

    for (int i = 1; i < 10000; i++)
        sums[i - 1] = sum_divs(i);


    for (int i = 1; i < 10000; i++)
        for (int j = i + 1; j < 10000; j++)

            if (sums[i - 1] == j && sums[j - 1] == i)
                cout << i << ", " << j << endl;

    return 0;
}
