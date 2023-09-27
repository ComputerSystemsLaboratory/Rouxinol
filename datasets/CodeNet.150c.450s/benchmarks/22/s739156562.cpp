//AOJ-GRL-1-B
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a) for(int i = 0; i < (a); i++)
#define ALL(a) (a).begin(),(a).end()
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1e9;
const int MOD = 1e9 + 7;

#define MAX_E 10000
#define MAX_V 10000

//頂点fromから頂点toへのコストcostの辺
struct edge { int from, to, cost; };

edge es[MAX_E];//辺の張り型 : es[i] = edge{from, to, cost}

int dist[MAX_V];//最短距離
int V, E;//Vは頂点数、Eは変数

//s番目の頂点から各頂点への最短距離を求める。また、trueならsからたどりつける負の閉路が存在する。
bool bellman_ford(int s){
    for(int i = 0; i < V; i++) dist[i] = INF;
    int cnt = 0;
    dist[s] = 0;
    while(cnt < V){
        bool update = false;
        for(int i = 0; i < E; i++){
            edge e = es[i];
            if(dist[e.from] != INF && dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
                update = true;
            }
        }
        if(!update) break;
        cnt++;
    }
    return (cnt == V);
}

//trueなら負の閉路が存在する
bool find_negative_loop(){
    memset(dist, 0, sizeof(dist));

    for(int i = 0; i < V; i++){
        for(int j = 0; j < E; j++){
            edge e = es[j];
            if(dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
                if(i == V - 1) return true;
            }
        }
    }
    return false;
}

signed main(){
    int r;
    cin >> V >> E >> r;
    int s,t,d;
    REP(i,E){
        cin >> s >> t >> d;
        es[i] = edge{s, t, d};
    }
    if(bellman_ford(r)){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        REP(i,V){
            if(dist[i] == INF){
                cout << "INF" << endl;
            }else{
                cout << dist[i] << endl;
            }
        }
    }
    return 0;
}
