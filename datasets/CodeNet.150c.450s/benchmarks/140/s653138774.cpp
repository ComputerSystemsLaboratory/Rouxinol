// AOJ
// Minimum Spanning Tree
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=ja
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V, E; cin >> V >> E;
    vector< vector<pair<int, int>> > g(V);
    for (int i = 0; i < E; i++) {
        int s, t, w; cin >> s >> t >> w;
        g[s].push_back(make_pair(w, t));
        g[t].push_back(make_pair(w, s));
    }

    int total_weight = 0;
    vector<bool> done(V, false);
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > q;
    q.push(make_pair(0, 0));
    while (!q.empty()) {
        pair<int, int> e = q.top(); q.pop();
        int& w = e.first, v = e.second;
        if (done[v]) continue;
        total_weight += w;
        done[v] = true;
        for (const auto& f : g[v]) {
            if (!done[f.second])
                q.push(f);
        }
    }
    cout << total_weight << endl;
}

