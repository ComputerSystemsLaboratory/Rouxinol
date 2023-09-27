#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

#define rep0(i, n) for (i = 0; i < n; i++)
#define rep(s, i, n) for (i = s; i < n; i++)
using namespace std;

int N, Q, a[100001];
long long ans;

int main()
{
    int i, j, b, c;
    cin >> N;
    rep0(i, N)
    {
        cin >> j;
        ans += j;
        a[j]++;
    }
    cin >> Q;

    rep0(i, Q)
    {
        cin >> b >> c;
        ans += (c - b) * a[b];
        a[c] += a[b];
        a[b] = 0;
        cout << ans << endl;
    }

    return 0;
}