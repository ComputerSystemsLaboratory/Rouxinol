#include <iostream>
#include <algorithm>
using namespace std;

#define INF int(1e9)

int n, m, ans;
int c[21], memo[50001];

int solve(int v) {
    //cout << "called v = " << v << endl;

    if (v < 0) return INF;
    if (v == 0) return 0;
    if (memo[v] != INF) return memo[v];

    int ret = INF, tmp;

    for (int i = 0; i < m; ++i) {
        tmp = solve(v - c[i]) + 1;
        //cout << v << " " << c[i] << ", " << tmp << endl;
        ret = min(ret, tmp);
    }

    return memo[v] = ret;
}

int main() {
    cin >> n >> m;
    fill(memo, memo + 50001, INF);
    for (int i = 0; i < m; ++i) cin >> c[i];

    ans = solve(n);

    cout << ans << endl;

    return 0;
}