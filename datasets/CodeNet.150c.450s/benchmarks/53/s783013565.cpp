#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << n << ":";
    long long tmp = n;
    long long p = 2;
    while (p * p <= n)
    {
        if (tmp % p == 0)
        {
            cout << " " << p;
            tmp /= p;
        }
        else
        {
            ++p;
        }
    }
    if (tmp != 1)
        cout << " " <<tmp;
    cout << endl;
}

