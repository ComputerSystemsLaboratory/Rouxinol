#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int main()
{
    int n, now, min_v, ans;

    scanf("%d", &n);
    scanf("%d", &min_v);
    scanf("%d", &now);
    ans = now - min_v;
    for (int i = 2; i < n; ++i) {
        min_v = min(min_v, now);
        scanf("%d", &now);
        ans = max(ans, now - min_v);
    }

    printf("%d\n", ans);

    return 0;
}