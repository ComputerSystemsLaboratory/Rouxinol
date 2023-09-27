#include <stdio.h>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, a[6000];

int main() {
    for (;;) {
        scanf("%d", &n);
        if (n == 0) return 0;
        rep (i, n) scanf("%d", a+i);
        int m = 0, s = 0, ans = a[0];
        rep (i, n) {
            s += a[i];
            ans = max(ans, s-m);
            m = min(m, s);
        }
        printf("%d\n", ans);
    }
}