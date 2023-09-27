#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define rep(i, n)       reps (i, 0, n)
#define reps(i, m, n)   for  (int i = (int)(m); i < (int)(n); ++i)
#define iter(c)         __typeof((c).begin())
#define foreach(it, c) for (iter(c) it = (c).begin(); it != (c).end(); ++it)

typedef long long ll;

int main()
{
    int n, m, h[1555], w[1555];
    while (cin >> n >> m, n) {
        h[0] = w[0] = 0;
        reps (i, 1, n + 1) cin >> h[i];
        reps (i, 1, m + 1) cin >> w[i];
        reps (i, 1, n + 1) h[i] += h[i-1];
        reps (i, 1, m + 1) w[i] += w[i-1];
        
        map<int, int> table;
        rep (i, n + 1) rep (j, i) ++table[h[i] - h[j]];
        
        ll ans = 0;
        rep (i, m + 1) rep (j, i) ans += table[w[i] - w[j]];
        cout << ans << endl;
    }
}