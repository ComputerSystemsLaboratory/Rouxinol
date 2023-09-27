#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int T, n;
ll a[210], b[64];
char s[210];

bool ins(ll x) {
	for (int i = 60; ~i; i--) if (x >> i & 1) {
        if (!b[i]) { b[i] = x; return x; }
        x ^= b[i];
	}
    return x;
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
        }
        scanf("%s", s + 1);
        memset(b, 0, sizeof(b));
        bool flag = 1;
        for (int i = n; i; i--) {
            if (s[i] == '0') ins(a[i]);
            else flag &= !ins(a[i]);
        }
        printf("%d\n", !flag);
    }
    return 0;
}