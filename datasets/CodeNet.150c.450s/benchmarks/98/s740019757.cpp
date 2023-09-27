// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1153&lang=jp
#include <bits/stdc++.h>
using namespace std;
int n, m;
int s0[100], s1[100];
int main() {
    while(scanf("%d%d",&n,&m)) {
        if (n==0&&m==0) break;
        int hanako = 0, tarou = 0;
        for (int i=0; i<n; i++) {
            scanf("%d", &s0[i]);
            hanako += s0[i];
        }
        for (int i=0; i<m; i++) {
            scanf("%d", &s1[i]);
            tarou += s1[i];
        }
        int r0 = 0, r1 = 0, res = -1;
        for (int i=0; i<n; i++) {
            // ??¢???????????§????´???°???
            for (int j=0; j<m; j++) if (hanako - s0[i] + s1[j] == tarou - s1[j] + s0[i]) {
                if (res == -1 || res > s0[i] + s1[j]) {
                    res = s0[i] + s1[j];
                    r0 = s0[i]; r1 = s1[j];
                }
            }
        }
        if (res == -1) puts("-1");
        else printf("%d %d\n", r0, r1);
    }
}