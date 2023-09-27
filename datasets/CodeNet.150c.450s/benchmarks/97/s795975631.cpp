#include<bits/stdc++.h>
using namespace std;

#define int long long

const int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};

int N, x[200], y[200];

signed main()
{
    while (cin >> N, N)
    {
        int maxX = 0, minX = 0, maxY = 0, minY = 0;
        for (int i = 1; i < N; i++)
        {
            int n, d;
            cin >> n >> d;
            x[i] = x[n] + dx[d];
            y[i] = y[n] + dy[d];
            maxX = max(maxX, x[i]);
            minX = min(minX, x[i]);
            maxY = max(maxY, y[i]);
            minY = min(minY, y[i]);
        }
        printf("%lld %lld\n", maxX - minX + 1, maxY - minY + 1);
    }
    return 0;
}