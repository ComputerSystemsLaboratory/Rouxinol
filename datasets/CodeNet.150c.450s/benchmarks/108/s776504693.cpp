#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for(int i=0;i<n;++i){
    int id,k;
    cin >> id >> k;
    id--;
    for(int j=0;j<k;++j){
      int v;
      cin >> v;
      v--;
      g[id].push_back(v);
    }
  }
  vector<int> dist(n,-1);
  queue<int> que;
  dist[0]=0;
  que.push(0);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(auto nv : g[v]){
      if(dist[nv]!=-1)continue;
      dist[nv]=dist[v]+1;
      que.push(nv);
    }
  }
  for(int i=0;i<n;++i){
    cout << i+1 << " " << dist[i] << endl;
  }
  return 0;
}

