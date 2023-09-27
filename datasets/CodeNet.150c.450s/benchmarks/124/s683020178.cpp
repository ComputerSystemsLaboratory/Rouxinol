//ALDS1_12_cにて、AC
#include<bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
int main(){
  int n;
  cin>>n;
  vector<pair<int,int> > adj[10005]; //重み付き有向グラフの隣接リスト表現
  //隣接リストの作成
  int u,k;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      int v,c;
      cin>>v>>c;
      adj[u].emplace_back(v,c);
    }
  }

  //ここからダイクストラ
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
  vector<bool> fg(n+1000);
  vector<int> cost(n+1000);
  //初期化
  for(int i=0;i<n;i++){
    cost[i]=INF;
    fg[i]=false;
  }
  //出発地点はコスト0
  cost[0]=0;
  pq.emplace(0,0);
 
  //最短経路を検出
  while(!pq.empty()){
    auto now=pq.top(); pq.pop();
    int u=now.second;
    fg[u]=true;

    //最小値を取り出し、それが最短でなければ無視
    if(cost[u]<now.first) continue;
    
    //次の辺へ移動
    for(int j=0;j<adj[u].size();j++){
      int v=adj[u][j].first;
      if(fg[v]) continue;
      if(cost[v]>cost[u]+adj[u][j].second){
        cost[v]=cost[u]+adj[u][j].second;
        //priority_queueはデフォルトで大き値を優先するため、-1をかける。
        pq.emplace(cost[v],v);
      }
    }
  }

  for(int i=0;i<n;i++){
    cout<<i<<" "<<(cost[i]==INFINITY ? -1 : cost[i])<<'\n';
  }
  return(0);
}
