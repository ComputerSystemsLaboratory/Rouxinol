#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 200006;
int a[N];

int main () {
    int n; scanf("%d", &n);
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        a[x]++;
        ans += x;
    }
    int q; scanf("%d", &q);
    while (q--) {
        int b, c; scanf("%d%d", &b, &c);
        ans += a[b] * (c - b);
        a[c] += a[b];
        a[b] = 0;
        printf("%lld\n", ans);
    }
}
