#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#define l(u) (u<<1)
#define r(u) (u<<1|1)
#define lson l, m, rt << 1
#define rson m + 1, r, rt << 1 | 1
#define root 1, n, 1
#define BUG puts("I am bug")
#define XY(x, y) printf("(%d %d)\n", x, y)
typedef long long ll;
using namespace std;

int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
const int MAXN = 1010;


int main() {
    ios_base::sync_with_stdio(0);
    ll a, b;
    while (cin >> a >> b)
    {
        ll ans1 = __gcd(a, b);
        ll ans2 = a * b / ans1;
        cout << ans1 << ' ' << ans2 << '\n';
    }
    return 0;
}