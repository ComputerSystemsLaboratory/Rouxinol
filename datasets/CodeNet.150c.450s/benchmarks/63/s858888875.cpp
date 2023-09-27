//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using ld = long double;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

struct edge {
    int to;
    int64_t cost;
    edge(int x=0, int64_t y=0):to(x), cost(y) {}
};

vector<vector<edge> > G; // resizeの必要あり

struct dijkstra {
    vector<int64_t> d;
    dijkstra(int s, int n):d(n, INT64_MAX/3) { // sはスタート,nは頂点数
        d[s] = 0LL;
        priority_queue<pair<int64_t, int>, vector<pair<int64_t, int> >, greater<pair<int64_t, int> > > que;
        que.push(make_pair(0LL, s));
        while(!que.empty()) {
            pair<int64_t, int> now = que.top();
            que.pop();
            if(now.first != d[now.second]) continue;
            for(edge next:G[now.second]) {
                if(d[next.to] > d[now.second] + next.cost) {
                    d[next.to] = d[now.second] + next.cost;
                    que.push(make_pair(d[next.to], next.to));
                }
            }
        }
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int v, e, r;
    cin >> v >> e >> r;
    G.resize(v);
    rep(i, e) {
        int s, t, d;
        cin >> s >> t >> d;
        G[s].emplace_back(t, d);
    }

    vector<ll> vec = dijkstra(r, v).d;
    rep(i, vec.size()) {
        cout << (vec[i] == INT64_MAX/3?"INF":to_string(vec[i])) << '\n';
    }
}
