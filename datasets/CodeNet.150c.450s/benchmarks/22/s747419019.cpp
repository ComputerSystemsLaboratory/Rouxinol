#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <chrono>

using namespace std;

const int64_t INF = 1e+18;

struct edge {
    int from, to;
    int64_t weight;
};

bool Bellman_Ford(int s, vector<edge> &es, vector<int64_t> &d) {
    fill(d.begin(), d.end(), INF);
    d[s] = 0;
    for (int i = 0; i < d.size(); i++) {
        for (int j = 0; j < es.size(); j++) {
            edge e = es[j];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.weight) {
                d[e.to] = d[e.from] + e.weight;
                if (i == d.size() - 1) return true;
            }
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int V, E, s; cin >> V >> E >> s;
    vector<edge> es(E);
    for (int i = 0; i < E; i++) {
        cin >> es[i].from >> es[i].to >> es[i].weight;
    }
    
    vector<int64_t> d(V);
    
    if (Bellman_Ford(s, es, d)) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; i++) {
            cout << (d[i] == INF ? "INF" : to_string(d[i])) << endl;
        }
    }
    
    return 0;
}

