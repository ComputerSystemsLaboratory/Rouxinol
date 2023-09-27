#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 1000000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair

const int MAX_V = 100000;

int V, E, r;
int s, t, d;

vector<pair<int, int>> G[MAX_V];
int dist[MAX_V];

int main() {
    cin >> V >> E >> r;
    REP(i, E) {
        cin >> s >> t >> d;
        G[s].PB(MP(d, t));
    }

    REP(i, V) dist[i] = MOD;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    dist[r] = 0;
    Q.push(MP(0, r));

    while (Q.size()) {
        pair<int, int> p = Q.top(); Q.pop();
        int pos = p.second;
        if (dist[pos] < p.first) continue;
        REP(i, G[pos].size()) {
            pair<int, int> edge = G[pos][i];
            int to = edge.second;
            if (dist[pos] + edge.first >= dist[to]) continue;
            dist[to] = dist[pos] + edge.first;
            Q.push(edge);
        }
    }

    REP(i, V) {
        int di = dist[i];
        if (di == MOD) PRINT("INF");
        else PRINT(di);
    }
    
    return 0;
}
