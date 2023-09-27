// J4180449 三宅亮輔
// 問題名
// - Single Source Shortest Path 1
// 問題URL
// - https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A
// 所要時間
// -
// 学んだこと
//
//
//

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

ll V, E, r;

ll d[100000];

struct Edge {
    ll to, cost;
};

vector<Edge> v[100000];
const ll INF = 0xfffffffffffffff;

priority_queue<P, vector<P>, greater<P> /**/> q;

int main() {
    cin >> V >> E >> r;

    for(ll i = 0; i < E; i++) {
        ll from, to, cost;
        cin >> from >> to >> cost;

        Edge e1;
        e1.to = to;
        e1.cost = cost;

        v[from].push_back(e1);
    }
    for(ll i = 0; i < V; i++)
        d[i] = INF;

    q.push(P(0, r));

    while(!q.empty()) {
        P p = q.top();
        q.pop();
        ll from = p.second;
        ll dist = p.first;
        if(d[from] <= dist)
            continue;
        d[from] = dist;

        for(ll i = 0; i < v[from].size(); i++) {
            Edge e = v[from][i];
            ll to = e.to;
            ll cost = e.cost;
            ll new_d = d[from] + cost;

            if(d[to] > new_d) {
                q.push(P(new_d, to));
            }
        }
    }

    for(ll i = 0; i < V; i++)
        if(d[i] == INF)
            cout << "INF" << endl;
        else
            cout << d[i] << endl;
}
