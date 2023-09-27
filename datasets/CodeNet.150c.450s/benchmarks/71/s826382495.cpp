#include <cstdio>
#define REP(i,n) for(int i=0;i<(n);i++)

int main(void) {
    int n;
    const int N = 10;
    while(~scanf("%d", &n)) {
        int ans = 0;
        REP(a,N) REP(b,N) REP(c,N) REP(d,N) {
            if(a+b+c+d == n) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}