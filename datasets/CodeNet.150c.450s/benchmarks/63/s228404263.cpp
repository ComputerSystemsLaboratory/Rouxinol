#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define ALL(n) begin(n), end(n)
#define INF ((1 << 30) - 1)
#define LINF (1LL << 60)
#define EPS (1e-10)
typedef long long Int;
typedef pair<Int, Int> P;
struct cww
{
    cww()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
    }
} star;
Int V, E, r, s, t, d;

vector<P> edge[1100000];

vector<Int> dijkstra(Int start)
{
    priority_queue<P,vector<P>, greater<P>> pq;
    vector<Int> dist(V,LINF);
    dist[start]=0;
    pq.push(P(dist[start],start));
    while(!pq.empty()){
        auto p= pq.top(); pq.pop();
        Int d=p.first;
        Int from =p.second;
        if(dist[from]<d) continue;
        for(auto nxt: edge[from]){
            Int to=nxt.first;
            Int c=nxt.second;
            if(dist[from]+c<dist[to]){
                dist[to]=dist[from]+c;
                pq.push(P(dist[to],to));
            }
        }
    }
    return dist;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++)
    {
        cin >> s >> t >> d;
        edge[s].push_back(P(t, d));
    }
    auto dist = dijkstra(r);
    for (int i = 0; i < V; i++)
    {
        if (dist[i] == LINF)
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
    return 0;
}
