// 参考
//   xorの掃き出し https://twitter.com/noshi91/status/1200702280128856064
//   https://atcoder.jp/contests/agc045/submissions/14100178
//   https://atcoder.jp/contests/agc045/submissions/14091582

#include <iostream>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b; return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b; return true;
    }
    return false;
}


#define pb push_back
#define mp make_pair
#define mt make_tuple


int solve(int N, vector<ll> As, string S) {

    set<ll, greater<ll>> bases;
    // vector<ll> bases;

    for(int i = N - 1; i >= 0; --i) {
        ll a = As[i];
        if (S[i] == '0') {
            for (auto b: bases) chmin(a, a ^ b);
            if (a) {
                bases.insert(a);
                // bases.pb(a);
            }
        }
        else {
            for (auto b: bases) chmin(a, a ^ b);
            if (a) {
                return 1;
            }
        }
        // cout << "bases:" << endl;
        // for(auto b: bases) cout << "  " << b << endl;
    }
    return 0;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    REP(t, T) {
        int N; cin >> N;
        vector<ll> As(N);
        REP(n, N) cin >> As[n];
        string S; cin >> S;

        cout << solve(N, As, S) << endl;
    }
    return 0;
}
