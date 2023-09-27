// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A&lang=jp
// dp[i] = min(dp[i-c[j]]+1)
#include <bits/stdc++.h>
using namespace std;
int n, m;
int c[20], dp[50001];
int main() {
    scanf("%d%d",&n,&m);
    for (int i=0; i<m; i++) scanf("%d", &c[i]);
    sort(c, c+m);
    for (int i=1; i<=n; i++) {
        dp[i] = dp[i-c[0]]+1;
        for (int j=1; j<m; j++) {
            if (i < c[j]) break;
            dp[i] = min(dp[i], dp[i-c[j]]+1);
        }
    }
    printf("%d\n",dp[n]);
}