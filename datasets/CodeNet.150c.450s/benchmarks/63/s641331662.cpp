#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#define int long long
using namespace std;
 
const int INF = 1e12;
const int MAX_V = 1000000;
 
int V;
vector <pair<int,int> >  G[MAX_V];
int d[MAX_V];
 
void dijkstra(int s) {
    typedef pair<int,int> pii;
    priority_queue<pii, vector<pii>, greater<pii> > que;
    for (int i = 0; i < V; i++) {
        d[i] = INF;
         
    }
    d[s] = 0;
    que.push(pii(0, s));
    while (!que.empty()) {
        pii p = que.top();
        que.pop();
        int v = p.second;
        if (d[v] < p.first)continue;
        for (int i = 0; i < G[v].size(); i++) {
            pair<int, int> e = G[v][i];
             
            if (d[e.first] > d[v] + e.second) {
                d[e.first] = d[v] + e.second;
                que.push(pii(d[e.first], e.first));
                 
            }
        }
    }
}
signed main() {
    int E, r;
    cin >> V >> E >> r;
    int s, t, a;
    for (int i = 0; i < E; i++) {
        cin >> s >> t >> a;
        G[s].push_back( make_pair(t, a));
    }
    dijkstra(r);
    for (int i = 0; i < V; i++) {
        if (d[i] >= INF) {
            cout << "INF" << endl;
        }
        else {
            cout << d[i] << endl;
        }
    }
    return 0;
}