#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for(int i=0;i<m;i++){
    int a , b;
    cin >> a >> b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  
  vector<int> dist(n, -1);
  queue<int>  que;
  vector<int> ans(n,-1);
  
  dist[0] = 0;
  que.push(0);
  
  while(!que.empty()){
    int v = que.front();
    que.pop();
     
    for(int nv : g[v]){
      if(dist[nv] != -1) continue;
      
      dist[nv] = dist[v] +1;
      ans[nv] = v;
      que.push(nv);
      
      }
    }
  cout << "Yes" << endl;
  for(int i=0;i<n;i++){
    if(i==0) continue;
    int s = ans[i];
    ++s;
    cout << s <<endl;
  }
  
  
}
