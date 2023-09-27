#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

const int MAXN = 100000;

typedef pair<int, int> ii;
typedef vector<ii> vii;

vii adjList[MAXN];

int dist[MAXN]; bitset<MAXN> inq;
queue<int> q;

int main(){

    int N, E, S;
    cin >> N >> E >> S;

    for (int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;

        adjList[s].push_back(ii(d,t));
    }

    memset(dist, -1, sizeof(dist)); dist[S] = 0;
    inq.reset(); inq[S] = 1;
    
    q.push(S);
    while (!q.empty()) {
        int x = q.front(); q.pop();
        
        inq[x] = 0;
        for (vii::iterator it = adjList[x].begin(); it != adjList[x].end(); ++it) {
            int nn = it->se;
            int nd = dist[x]+it->fi;

            if (dist[nn] != -1 && dist[nn] <= nd) continue;
            
            dist[nn] = nd;
            if (!inq[nn]) q.push(nn);
            inq[nn] = 1;
        }
    }

    for (int i=0; i<N; i++){
        if (dist[i] == -1) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
}