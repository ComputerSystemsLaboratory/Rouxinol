#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(x) push_back(x)
#define uniq(x) (x).erase(unique(all(x)),(x).end())


int tax(int p, int r) {
    return p*(100+r)/100;
}

void solve(void){
    while (1) {
        int s, x, y;
        scanf("%d %d %d\n", &x, &y, &s);
        if (s == 0 && x == 0 && y == 0) break;
        int ans = 0;
        Rep(1, s-1, i) Rep(1, s-1, j) if (tax(i, x) + tax(j, x) == s) ans = max(ans, tax(i, y) + tax(j, y));
        printf("%d\n", ans);
    }
}

int main(void){
  solve();
  return 0;
}

