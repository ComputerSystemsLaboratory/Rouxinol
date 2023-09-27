# include <bits/stdc++.h>
# define pb push_back
# define int long long
using namespace std;
void _cin(){} template <class Head, class... Tail> void _cin(Head&& head, Tail&&... tail){ cin >> head; _cin(forward<Tail>(tail)...); }
#define Cin(Type, ...) Type __VA_ARGS__; _cin(__VA_ARGS__)
#define Cinv(Type, xs, n) vector<Type> xs(n); rep(i, n) cin >> xs[i]
#define Cinv2(Type, xs, ys, n) vector<Type> xs(n), ys(n); rep(i, n) cin >> xs[i] >> ys[i]
#define Cinv3(Type, xs, ys, zs, n) vector<Type> xs(n), ys(n), zs(n); rep(i, n) cin >> xs[i] >> ys[i] >> zs[i]
#define Cinvv(Type, xs, h, w) vector<vector<Type>> xs(h, vector<int>(w)); rep(i, h) rep(j, w) cin >> xs[i][j]
void Print() { cout << endl; }
template <class Head, class... Tail> void Print(Head&& head, Tail&&... tail) { cout << head; if (sizeof...(tail) != 0) cout << " "; Print(forward<Tail>(tail)...); }
template <class Type> void Print(vector<Type> &vec) { for (auto& a : vec) { cout << a; if (&a != &vec.back()) cout << " "; } cout << endl; }
template <class Type> void Print(vector<vector<Type>> &df) { for (auto& vec : df) { Print(vec); } }
void Debug() { cerr << endl; }
template <class Head, class... Tail> void Debug(Head&& head, Tail&&... tail) { cerr << head; if (sizeof...(tail) != 0) cerr << " "; Debug(forward<Tail>(tail)...); }
template <class Type> void Debug(vector<Type> &vec) { for (auto& a : vec) { cerr << a; if (&a != &vec.back()) cerr << " "; } cerr << endl; }
template <class Type> void Debug(vector<vector<Type>> &df) { for (auto& vec : df) { Debug(vec); } }
vector<int> range(int n) {
    vector<int> ar(max((int)0, n));
    iota(ar.begin(), ar.end(), 0);
    return ar;
}

signed main() {
    Cin(int, n); // 頂点数
    vector<vector<int>> G(n);
    for (auto i : range(n)) {
        Cin(int, u, k);
        u--;
        for (auto j : range(k)) {
            Cin(int, v);
            v--;
            G[u].pb(v);
        }
    }

    vector<int> dist(n, -1);
    queue<int> que;
    que.push(0);
    dist[0] = 0;
    while (!que.empty()) {
        int now = que.front(); que.pop();
        for (auto nxt : G[now]) {
            if (dist[nxt] != -1) continue;
            dist[nxt] = dist[now] + 1;
            que.push(nxt);
        }
    }

    for (auto i : range(n)) {
        cout << i+1 << " " << dist[i] << "\n";
    }

    return 0;
}

