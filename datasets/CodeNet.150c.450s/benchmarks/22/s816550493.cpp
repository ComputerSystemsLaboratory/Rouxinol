#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define MAXE 2010
#define MAXV 1010
#define INF 1e9

struct edge{int from, to, cost;};

edge es[MAXE];
int d[MAXV];
int V, E, r;

void shortest_path(int s) {
    for (int i = 0; i < V; i++) d[i] = INF;
    d[s] = 0;
    int count = 0;
    while (1) {
        bool update = false;
        for (int i = 0; i < E; i++) {
            edge e = es[i];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) break;
        count++;
        if (count > V) {
            cout << "NEGATIVE CYCLE" << endl;
            return;
        }
    }
    for (int i = 0; i < V; i++) {
        if (d[i] < INF) cout << d[i] << endl;
        else cout << "INF" << endl;
    }
    return;
}

int main(void) {
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }
    shortest_path(r);
    return 0;
}