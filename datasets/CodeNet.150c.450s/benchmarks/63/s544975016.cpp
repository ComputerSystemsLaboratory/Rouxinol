#include "bits/stdc++.h"

using namespace std;

const long long INF = 1000000000000000000;

void Main() {
    long long V, E, r;
    cin >> V >> E >> r;
    typedef pair<long long, long long> Weight_To;
    vector<set<Weight_To> > graph(V, set<Weight_To>());
    for (long long i = 0; i < E; ++i) {
        long long s, t, d;
        cin >> s >> t >> d;
        graph[s].insert(make_pair(d, t));
    }

    // Dijkstra
    vector<long long> d(V, INF);
    d[r] = 0;
    typedef pair<long long, long long> TotalCost_Current;
    priority_queue<TotalCost_Current, vector<TotalCost_Current>, greater<TotalCost_Current> > q;
    q.push(make_pair(0, r));
    while (!q.empty()) {
        TotalCost_Current tc_curr = q.top();
        long long costSoFar = tc_curr.first;
        long long curr = tc_curr.second;
        q.pop();
        if (d[curr] < costSoFar) {
            continue;
        }
        set<Weight_To> nextNodes = graph[curr];
        for (auto e : nextNodes) {
            if (d[e.second] > d[curr] + e.first) {
                d[e.second] = d[curr] + e.first;
                q.push(make_pair(d[e.second], e.second));
            }
        }
    }

    for (long long i = 0; i < V; ++i) {
        if (d[i] == INF) {
            cout << "INF" << endl;
        }
        else {
            cout << d[i] << endl;
        }
    }
}

int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}

