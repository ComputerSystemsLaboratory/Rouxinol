#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
const int INF=1145141919,MOD=1e9+7;
const long long LINF=8931145141919364364,LMOD=998244353;
// const int dx[]={1,0,-1,0,1,1,-1,-1},dy[]={0,-1,0,1,1,-1,-1,1};

const int VMAX=100010;
int V,E,start,goal;
vector<pair<long long,int>> edge[VMAX];
long long dist[VMAX];
bool used[VMAX];

void dijkstra(){
    // 距離をLINFで初期化
    rep(to,VMAX) dist[to]=LINF;
    // 始点は0
    dist[start]=0;
    // フラグを下げる
    rep(v,VMAX) used[v]=false;
    // 優先度付きキュー:[距離,頂点]←距離の昇順
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> q;
    // 距離0,始点
    q.push({0,start});
    // dijkstra
    while(q.size()){
        // 取り出してd=距離,v=頂点
        pair<long long,int> p=q.top(); q.pop();
        long long d=p.first;
        int from=p.second;
        if(used[from]) continue;
        used[from]=true;
        // 頂点から出る辺すべてについて
        for(auto e:edge[from]){
            long long cost=e.first,to=e.second;
            // 短縮できるとき
            if(d+cost<dist[to]){
                dist[to]=d+cost;
                q.push({dist[to],to});
            }
        }
    }
}

int main(){
    cin>>V;
    rep(i,V){
        int u,k; cin>>u>>k;
        rep(j,k){
            int to,distance;
            cin>>to>>distance;
            edge[u].push_back({distance,to});
        }
    }
    start=0;
    dijkstra();
    rep(i,V){
        cout<<i<<" "<<dist[i]<<endl;
    }
    return 0;
}

