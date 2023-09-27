#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define ALL(n) begin(n),end(n)
const int INF=1000000000;

using Graph=vector<vector<int>>;

int n;
vector<int> d;

void Dijkstra(const Graph &G){
    // 暫定の最短距離，頂点番号
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> que;
    que.emplace(d[0],0);

    // 距離を確定すべき頂点がなくなるまで続ける
    while(!que.empty()){
        pair<int,int> p=que.top();
        que.pop();
        int v=p.second;
        
        // 最短距離より大きい場合は無視
        if(d[v]<p.first) continue;

        REP(i,n){
            // 辺(v,i)がなければ無視
            if(G[v][i]==INF) continue;

            // 辺(v,i)を採用して距離が短くなるならば，暫定的に採用
            if(d[i]>d[v]+G[v][i]){
                d[i]=d[v]+G[v][i];
                que.emplace(d[i],i);
            }
        }
    }
}

int main(){
    cin>>n;

    // グラフの受け取り
    Graph G(n,vector<int>(n));
    REP(i,n){
        int u,k;
        cin>>u>>k;
        G[u].assign(n,INF);
        REP(j,k){
            int v,c;
            cin>>v>>c;
            G[u][v]=c;
        }
    }

    // d[i]=(無限大) で初期化
    d.assign(n,INF);
    d[0]=0;

    Dijkstra(G);

    REP(i,n){
        cout<<i<<" "<<d[i]<<endl;
    }
}
