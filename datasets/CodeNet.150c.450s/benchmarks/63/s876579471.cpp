#include <bits/stdc++.h>

using namespace std;

#define MAXN 100005
#define fi first
#define se second

typedef pair<int,int> ii;
typedef vector<ii> vii;

vii adjList[MAXN];

int dist[MAXN];
priority_queue< ii,vector<ii>,greater<ii> > pq;

int main(){

    ios_base::sync_with_stdio(0);

    /*
     *  N = number of vertices
     *  E = number of edges
     *  S = source
     */

    int N, E, S;
    cin >> N >> E >> S;

    int u, v, w;
    for (int i=0; i<E; i++){
        cin >> u >> v >> w;

        adjList[u].push_back(ii(w,v));
      //adjList[v].push_back(ii(w,u));      // undirected graph
    }

    memset(dist,-1,sizeof(dist));

    dist[S] = 0; pq.push(ii(0,S));
    while (!pq.empty()){
        ii front = pq.top(); pq.pop();
        int u = front.se;
        int d = front.fi;

        if (d > dist[u]) continue;

        for (int i=0; i<adjList[u].size(); i++){
            int vv = adjList[u][i].se;
            int vd = adjList[u][i].fi;

            if (dist[vv] == -1 || dist[vv] > dist[u] + vd){
                dist[vv] = dist[u] + vd; pq.push(ii(dist[vv],vv));
            }
        }
    }

    // Print all vertices distance from source
    for (int i=0; i<N; i++){
        if (dist[i] == -1) cout << "INF" << endl;   // no route exist
        else cout << dist[i] << endl;
    }

    return 0;
}