#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int f[45] = {};

int fib(int i)
{
    if (f[i] > 0)
        return f[i];

    if (i == 0 || i == 1)
    {
        f[i] = 1;
    }
    else
    {
        f[i] = fib(i-1) + fib(i-2);
    }
    return f[i];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}
