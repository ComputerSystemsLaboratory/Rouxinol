#include<bits/stdc++.h>
using namespace std;

#define int long long

int A, D, N;

bool IsPrime(int n)
{
    if (n <= 1) return false;
    int s = sqrt(n) + 1e-8;
    for (int i = 2; i <= s; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int Solve()
{
    int cnt = 0;
    for (int i = 0;; i++)
    {
        if (IsPrime(A + D * i))
        {
            if (++cnt == N) return A + D * i;
        }
    }
}

signed main()
{
    while (cin >> A >> D >> N, A || D || N)
    {
        printf("%lld\n", Solve());
    }
    return 0;
}