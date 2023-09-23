#include <bits/stdc++.h>
using namespace std;

long long pow(long long x, long long n, long long p)
{
    long long r = 1;
    while (n > 0)
    {
        if (n & 1)
            r = r * x % p;
        x = x * x % p;
        n >>= 1;
    }
    return r;
}

int main()
{
    long long P = 1000000007;
    long long m, n;

    cin >> m >> n;
    cout << pow(m, n, P) << endl;
}

