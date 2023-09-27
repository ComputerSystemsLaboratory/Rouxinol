#include <bits/stdc++.h>
using namespace std;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);++i)
#define rep(i,n) REP(i, 0, n)
int main() {
    int x, y, s;
    while(~scanf("%d%d%d", &x, &y, &s) && x) {
        int ans = 0;
        auto tax = [](int a, int x) { return a * (100 + x) / 100;};
        REP(i, 1, s) REP(j, 1, s) 
          if(tax(i, x) + tax(j, x) == s)
            ans = max(ans, tax(i, y) + tax(j, y));
        printf("%d\n", ans);
    }
    return 0;
}