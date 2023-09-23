#include <bits/stdc++.h>  

using namespace std;

//#define int long long
#define FOR(i, j, k) for(int i = j; i < (int)k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define INF (1 << 30)

typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> Pi;

const int MOD = 1e9 + 7;
const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};

template <class T> void chmin(T& a, const T& b) { a = min(a, b); }
template <class T> void chmax(T& a, const T& b) { a = max(a, b); }

int r, c;
int n[10][10000], ans = 0;
bool use[10];

void dfs(int now) {
    if(now == r) {
        int res = 0;
        rep(j, c) {
            int count = 0;
            rep(i, r) {
                if((use[i] && n[i][j]) || (!use[i] && !n[i][j])) ++count;
            }
            res += (r - count < count) ? count : r - count;
        }
        chmax(ans, res);
        return;
    }
    use[now] = true;
    dfs(now + 1);
    use[now] = false;
    dfs(now + 1);
}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while((cin >> r >> c), r | c) {
        ans = 0;
        rep(i, r) rep(j, c) cin >> n[i][j];
        dfs(0);
        cout << ans << endl;
    }
    return 0;
}