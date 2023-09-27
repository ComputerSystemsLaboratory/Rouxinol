#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

// cost, to
typedef pair<int, int> P;

int V, E, st;

void BellmanFord(vector<P> G[], ll dist[], int st, bool& has_negative){
    rep(i, V) dist[i]=INT64_MAX;
    dist[st] = 0;
    bool update=true;

    int cnt=0;
    while(update){
        update = false;
        cnt++;
        if(cnt==V) {has_negative=true; return;}
        rep(i, V){
            if(dist[i]==INT64_MAX) continue;
            for(auto e: G[i]){
                if(dist[e.second] > dist[i]+e.first){
                    dist[e.second] = dist[i] + e.first;
                    update = true;
                }
            }
        }
    }

    return;
}

void dijkstra(vector<P> G[], bool vis[], ll dist[], int st)
{
    priority_queue<P, vector<P>, greater<P>> min_heap;
    min_heap.push({0, st});
    rep(i, V) vis[i] = false;
    rep(i, V) dist[i] = INT64_MAX;
    dist[st] = 0;

    int frm, d;
    while(!min_heap.empty()){
        tie(d, frm) = min_heap.top(); min_heap.pop();
        if(vis[frm]) continue;

        // printf("node=%d\n", frm);
        vis[frm] = true;
        dist[frm] = d;

        for(P e: G[frm]){
            if(dist[e.second] > d+e.first)
                min_heap.push({d+e.first, e.second});
                // printf("(%d, %d) pushed\n", d+e.first, e.second);
        }
    }
}

int main()
{
    cin >> V >> E >> st;
    ll dist[V];
    bool vis[V];
    P edge;
    vector<P> G[V];

    int frm, to, cst;
    rep(i, E){
        scanf("%d %d %d", &frm, &to, &cst);
        G[frm].push_back({cst, to});
    }

    // dijkstra(G, vis, dist, st);
    bool has_negative=false;
    BellmanFord(G, dist, st, has_negative);

    if(V>1 && has_negative) {printf("NEGATIVE CYCLE\n"); return 0;}

    rep(i, V){
		if(dist[i] == INT64_MAX)
			printf("INF\n");
		else
			printf("%lld\n", dist[i]);
	}
}
