#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
#define MOD 1000000007
#define INF (1 << 30)
#define REP(i, m, n) for(int i = (int)m; i < (int)n; ++i)
#define rep(i, n) REP(i, 0, n)


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int submit[30] = {};
    rep(i, 28) {
        int n; cin >> n;
        n--;
        submit[n]++;
    }
    rep(i, 30) {
        if(submit[i] == 0) cout << i+1 << '\n';
    }
    return 0;
}
