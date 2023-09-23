#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

const int MAX_N = 200002;
int r[MAX_N], max_n[MAX_N], n;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &r[i]);

    max_n[n - 2] = r[n - 1];
    for (int i = n - 3; i >= 0; --i)
        max_n[i] = max(r[i + 1], max_n[i + 1]);

    int ans = -1e9 - 1;
    for (int i = 0; i < n - 1; ++i)
        ans = max(ans, max_n[i] - r[i]);

    printf("%d\n", ans);

    return 0;
}