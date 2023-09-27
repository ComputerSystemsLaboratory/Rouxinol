#include <bits/stdc++.h>
using namespace std;

#define N 2020
typedef long long ll;

int n;
ll a[N];
char s[N];
ll pos[66];

int main() {
    int T;
    scanf("%d", &T);
    while (T --) {
        scanf("%d", &n); memset(pos, -1, sizeof pos);
        for (int i = 1; i <= n; i ++) scanf("%lld", &a[i]); scanf("%s", s + 1);
        int ans = 0;
        for (int i = n; i >= 1; i --) {
            ll x = a[i];
            int k;
            for (k = 60; k >= 0; k --) if (x >> k & 1) {
                if (pos[k] < 0) break;
                else x ^= pos[k];
            }
            if (k < 0) continue;
            if (s[i] == '1') ans = 1;
            else pos[k] = x;
        }
        printf("%d\n", ans);
    }
}
