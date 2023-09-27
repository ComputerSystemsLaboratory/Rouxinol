#include <iostream>

using namespace std;

/*const int N = 100000008;
bool isprime[N];*/

bool isprime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return x > 1;
}

int main()
{
    /*for (int i = 0; i < N; i++) isprime[i] = true;
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    return 0;*/
    int n, res = 0;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        res += isprime(x);
    }
    printf("%d\n", res);
    return 0;
}

