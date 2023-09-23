#include <iostream>
using namespace std;

#define MAX 45

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int C;

    cin >> C;

    //cout << fibonacci(C) << endl;

    int F[MAX];

    F[0] = 1;
    F[1] = 1;

    for (int i = 2; i < MAX; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }

    cout << F[C] << endl;

    return 0;
}
