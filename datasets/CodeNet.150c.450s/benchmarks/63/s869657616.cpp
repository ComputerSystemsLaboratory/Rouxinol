#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;

int V, E, r;
int V_MAX = 1e5, E_MAX=5e5;

using P = pair<int,int>;

struct edge{
    int to, d;
};

vector<vector<edge>> G(V_MAX);
vector<int> dist(V_MAX,INF);

int main() {
    cin >> V >> E >> r;
    REP(i,E){
        int s,t,d;
        cin >> s >> t >> d;
        G[s].push_back({t,d});
    }

    priority_queue< P, vector<P>, greater<P> > q;
    q.push(make_pair(0,r));//ある点までの、最短距離 最初を距離にすることで優先度を利用できる
    dist[r] = 0;
    while(!q.empty()){
        P p = q.top();
        q.pop();
        int v = p.second;
        if(dist[v] < p.first) continue; //更新できないならスルー
        for(auto e: G[v]){
            if(dist[e.to] > dist[v] + e.d){
                dist[e.to] = dist[v] + e.d;
                q.push(make_pair(dist[e.to], e.to));
            }
        }
    }

    REP(i,V){
        if (dist[i] == INF){
            cout << "INF" << endl;
        }else{
            cout << dist[i] << endl;
        }
    }

    return 0;
}
