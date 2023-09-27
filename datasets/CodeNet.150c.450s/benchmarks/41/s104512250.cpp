#include <bits/stdc++.h>
using namespace std;

#define int long long

// ???????????£??????????????????
struct warshall_floyd {
    int d[1000][1000];
    int V;
    warshall_floyd(int V) : V(V) {
        for(int i=0; i<V; ++i) {
            for(int j=0; j<V; ++j) {
                if(i==j) d[i][j] = 0;
                else d[i][j] = 1e+18;
            }
        }
    }
    void add_edge(int s, int t, int c) {
        d[s][t] = c;
    }
    void run() {
        for(int k=0; k<V; ++k) {
            for(int i=0; i<V; ++i) {
                for(int j=0; j<V; ++j) {
                    if(d[i][k]==1e+18||d[k][j]==1e+18) continue;
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
    bool has_negative_cycle() {
        for(int i=0; i<V; ++i) {
            if(d[i][i]<0) return true;
        }
        return false;
    }
};

signed main() {
    int V, E;
    cin >> V >> E;
    warshall_floyd wf(V);
    for(int i=0; i<E; ++i) {
        int s, t, c;
        cin >> s >> t >> c;
        wf.add_edge(s, t, c);
    }
    wf.run();
    if(wf.has_negative_cycle()) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for(int i=0; i<V; ++i) {
        for(int j=0; j<V; ++j) {
            if(j!=0) cout << " ";
            if(wf.d[i][j] == 1e+18) cout << "INF";
            else cout << wf.d[i][j];
        }
        cout << endl;
    }
    return 0;
}