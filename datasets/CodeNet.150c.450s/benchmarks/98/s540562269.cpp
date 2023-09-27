#include <stdio.h>
#include <algorithm>
#include <numeric>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)(n); i++)

int n, m;
int a[100], b[100];

int main() {
    for(;;) {
        scanf("%d%d", &n, &m);
        if(n==0 && m==0) return 0;
        rep(i, n) scanf("%d", a+i);
        rep(i, m) scanf("%d", b+i);
        const int s1 = accumulate(a, a+n, 0);
        const int s2 = accumulate(b, b+m, 0);
        int ans1=-1, ans2=-1, minv=1000;
        rep(i, n) rep(j, m) if(s1-a[i]+b[j]==s2+a[i]-b[j]) {
            const int v = a[i]+b[j];
            if(minv>v) minv=v, ans1=a[i], ans2=b[j];
        }
        if(minv==1000) printf("%d\n", -1);
        else printf("%d %d\n", ans1, ans2);
    }
}