#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  vector<vector<int>> g(n,vector<int>());

  for (int i = 0; i < n; i++)
  {
    int u,k;
    cin >> u >> k;

    for (int j = 0; j < k; j++)
    {
      int v;
      cin >> v;
      v--;
      g[i].push_back(v);
      // g[v].push_back(i);
    }
  }

  vector<int> dist(n,-1);
  dist[0] = 0;
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int node = q.front();
    q.pop();
    for(int next:g[node]){
      if(dist[next]!=-1) continue;
      dist[next] = dist[node]+1;
      q.push(next);
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << i+1 << " " << dist[i] << endl;
  }  
}
