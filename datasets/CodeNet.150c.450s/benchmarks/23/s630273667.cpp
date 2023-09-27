#include <iostream>

using namespace std;

const int N = 45;
int fib[N];

int main()
{
    int n;
    scanf("%d", &n);
    fib[0] = fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("%d\n", fib[n]);
    return 0;
}

