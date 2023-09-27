#include<bits/stdc++.h>
using namespace std;
using ll=long long;

struct Edge{
  int to;
  int weight;
  Edge(int t,int w) : to(t),weight(w){}
};

using Graph = vector<vector<Edge>>;

int main(){
  int n,m,r;
  cin >> n >> m >> r;
  Graph G(n);

  for(int i=0;i<m;++i){
    int from,to,weight;
    cin >> from >> to >> weight;
    G[from].push_back(Edge(to,weight));
  }
  vector<ll> dist(n,1001001);
  vector<int> cnt(n,0);
  queue<int> que;
  dist[r]=0;
  cnt[r]=1;
  que.push(r);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(auto nv : G[v]){
      if(dist[nv.to] == 1001001 || dist[nv.to] > dist[v]+nv.weight){
        if(dist[nv.to]<0 && cnt[nv.to]>m){
          cout << "NEGATIVE CYCLE" << endl;
          return 0;
        }
        dist[nv.to] = dist[v]+nv.weight;
        cnt[nv.to]++;
        que.push(nv.to);
      }
    }
  }
  for(int i=0;i<n;++i){
    if(dist[i]==1001001) cout << "INF" << endl;
    //else if(dist[i]<0) cout << "NEGATIVE CYCLE" << endl;
    else cout << dist[i] << endl;
  }
  return 0;

}

