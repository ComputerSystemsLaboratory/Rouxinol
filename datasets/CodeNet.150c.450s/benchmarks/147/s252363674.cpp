#include <bits/stdc++.h>
using namespace std;

int F[10005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t;
    cin >> n;
    int p = sqrt(10005);
    for (int i = 1; i < p; i++)
        for (int j = 1; j < p; j++)
            for (int k = 1; k < p; k++)
            {
                t = i * i + j * j + k * k + i * j + j * k + k * i;
                if (t < 10001)
                    F[t]++;
            }
    for (int i = 1; i <= n; i++)
        cout << F[i] << '\n';
}