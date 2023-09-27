// clang-format off
#include <bits/stdc++.h>
using namespace std;
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep4(i, a, b, c) for (int i = int(a), i##__b = int(b), i##__c = int(c); i < i##__b; i += i##__c)
#define rep1(n) rep4(i, 0, n, 1)
#define rep2(i, n) rep4(i, 0, n, 1)
#define rep3(i, a, b) rep4(i, a, b, 1)
#define REP(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep3(i, a, b) for (int i = int(b) - 1, i##__a = int(a); i >= i##__a; i--)
#define rrep1(n) rrep3(i, 0, n)
#define rrep2(i, n) rrep3(i, 0, n)
#define rrep4(i, a, b, c) for (int i = int(a + (b - a - 1) / c * c), i##__a = int(a), i##__c = int(c); i >= i##__a; i -= i##__c)
#define RREP(...) overload4(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define FOR(i, x) for (auto &i : x)
#define ALL(v) (v.begin()), (v.end())
#define pb(x) emplace_back(x)
#define mp(x, y) make_pair(x, y)
#define mt make_tuple
#define endl '\n'
const int MOD = 1e9 + 7;
const int INF = 1e9 + 9;
const long long LINF = 1e18;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using vbool = vector<bool>;
using vvbool = vector<vector<bool>>;
using vstring = vector<string>;
template <class T> using vv = vector<vector<T>>;
#define vvint(A, H, W) vvint A(H, vint(W))
template <class T> bool chmax(T &a, const T &b) {if (a < b) {a = b;return 1;}return 0;}
template <class T> bool chmin(T &a, const T &b) {if (b < a) {a = b;return 1;}return 0;}
#define print(x){cout<<x<<endl;}
// clang-format on

int main() {
    int v, e, r;
    cin >> v >> e >> r;
    vector<tuple<int, int, int>> edges(e);

    FOR(edge, edges) {
        int s, t, d;
        cin >> s >> t >> d;
        edge = mt(s, t, d);
    }

    vint ok(v);
    vvint tos(v);
    FOR(edge, edges) {
        int s, t, d;
        tie(s, t, d) = edge;
        tos[s].pb(t);
    }
    stack<int> stk;
    stk.push(r);
    for (stk.push(r); !stk.empty();) {
        int now = stk.top();
        stk.pop();
        ok[now] = true;
        FOR(to, tos[now]) {
            if (!ok[to]) stk.push(to);
        }
    }

    vll ans(v, LINF);
    ans[r] = 0;

    bool changed;
    REP(cnt, v + 1) {
        changed = false;
        FOR(edge, edges) {
            int s, t, d;
            tie(s, t, d) = edge;
            if (!ok[s]) continue;
            changed |= chmin(ans[t], ans[s] + d);
        }
        if (cnt == v && changed) {
            print("NEGATIVE CYCLE");
            return 0;
        }
    }

    REP(v) {
        if (ok[i]) {
            print(ans[i]);
        } else {
            print("INF");
        }
    }
}

