#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <utility>
#include <algorithm>
#include <functional>
#include <deque>
#define INF 1e9
#define MAX_V 1000
#define MAX_E 2000
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

struct edge { int from, to, cost; };

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    edge es[MAX_E];
    
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        es[i] = edge{s, t, d};
    }
    
    int d[MAX_V];
    fill(d, d + MAX_V, INF);
    d[r] = 0;
    
    bool negative = false;
    
    for (int i = 0;; ++i) {
        if (i >= V) {
            negative = true;
            break;
        }
        bool updated = false;
        for (int i = 0; i < E; ++i) {
            edge e = es[i];
            if (d[e.from] != INF && d[e.from] + e.cost < d[e.to]) {
                d[e.to] = d[e.from] + e.cost;
                updated = true;
            }
        }
        if (!updated) break;
    }
    
    if (negative)
        cout << "NEGATIVE CYCLE" << endl;
    else {
        for (int i = 0; i < V; ++i) {
            if (d[i] == INF)
                cout << "INF" << endl;
            else
                cout << d[i] << endl;
        }
    }
    
    return 0;
}

