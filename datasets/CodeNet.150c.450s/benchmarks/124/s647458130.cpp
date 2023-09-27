#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int n;
int res = 0;
struct node {
    int id;
    int dist;
    bool searched;
};

node v[100];
int edge[100][100];

int main() {
    cin >> n;
    REP(i, n) {
        int u, k;
        cin >> u >> k;
        v[u].id = u;
        v[u].dist = INF;
        v[u].searched = false;
        REP(j, n) edge[i][j] = INF;
        REP(j, k){
            int to, cost;
            cin >> to >> cost;
            edge[i][to] = cost;
        }
    }
    v[0].dist = 0;
    int prev = 0;
    REP(i, n){
        int minimum = INF;
        REP(j, n){
            if(!v[j].searched && minimum >= v[j].dist){
                prev = j;
                minimum = v[j].dist;
            }
        }
        REP(j, n){
            if(!v[j].searched && edge[prev][j] != INF){
                v[j].dist = min(v[j].dist, v[prev].dist + edge[prev][j]);
            }
        }
        v[prev].searched = true;
    }
    REP(i, n) cout << i << " " << v[i].dist << endl;
    return 0;
}