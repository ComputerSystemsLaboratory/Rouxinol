#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repr(i, n) for(int i = (n-1); i >= 0; --i)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

typedef long long ll;
typedef pair<int, int> P;

const int MAX = 200005;
const int INF = 1001001001;
const int MOD = 1000000007;

int main(){
    int D;
    cin >> D;

    vector<int> C(26);
    for (auto &i : C) cin >> i;

    vector<vector<int>> S(D, vector<int>(26));
    for (auto &i : S) for (auto &j : i) cin >> j;

    vector<int> t(D);
    for (auto &i : t) cin >> i, --i;

    vector<int> last(26);

    int ans = 0;
    rep(d, D) {
        // calc
        ans += S[d][t[d]];
        last[t[d]] = d+1;
        rep(i, 26) ans -= C[i] * ((d+1) - last[i]);
        cout << ans << endl;
    }
}