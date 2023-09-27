#include <bits/stdc++.h>
using namespace std;

int a[100000];
int main() {
    const int INF = 1e9;
    int n, k;
    while(~scanf("%d%d", &n, &k) && n) {
        for(int i = 0; i < n; ++i) scanf("%d", a + i);
        int sum = 0, ans = -INF;
        for(int i = 0; i < n; ++i) {
            sum += a[i];
            if(i < k - 1) continue;
            if(i >= k) sum -= a[i - k];
            ans = max(ans, sum);
        }
        printf("%d\n", ans);
    }
}