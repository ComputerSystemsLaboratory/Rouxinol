#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
#define int long long
using P = pair<int,int>;
struct edge{int from, to, cost;};
edge graph[2200];
int dist[1100];
const int INF = 1001001001001ll;
bool ng = false;
signed main(){
    int v,e,r;cin >> v >>e >> r;
    rep(i,e){
        cin >> graph[i].from >> graph[i].to >> graph[i].cost;
    }
    rep(i,v)dist[i] = INF;
    dist[r] = 0;
    int cnt = 0;
    while(1){
        cnt++;
        bool update = false;
        rep(i,e){
            auto e = graph[i];
            if(dist[e.from] != INF && dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
                update = true;
            }
        }
        if(!update)break;
        if(cnt > v){
            ng = true;
            break;
        }
        

        
    }
    if(ng){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i,v){
        if(dist[i] == INF)cout << "INF" << endl;
        else cout << dist[i] << endl;
    }

    return 0;
}
