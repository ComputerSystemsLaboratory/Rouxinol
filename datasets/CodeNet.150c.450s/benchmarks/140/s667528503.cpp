#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
const int MAX_V = 1e5 + 1;
vector<vector<P>> G(MAX_V);

// N = 頂点数
int prim(int N) {
    vector<bool> used(N, false);
    priority_queue<P, vector<P>, greater<P>> que;
    que.push(P(0, 0));
    int ret = 0;
    while (!que.empty()) {
        P p = que.top(); que.pop();
        if (used[p.second]) continue;
        used[p.second] = true;
        ret += p.first;
        rep(i, G[p.second].size()) {
            que.push(P(G[p.second][i].first, G[p.second][i].second));
        } 
    }
    return ret;
}
int main()
{
    int V, E;
    cin >> V >> E;

    rep(i, E) {
        int s, t, w;
        cin >> s >> t >> w;
        G[s].push_back(P(w, t));
        G[t].push_back(P(w, s));
    }

    cout << prim(V) << endl;
    return 0;
}
