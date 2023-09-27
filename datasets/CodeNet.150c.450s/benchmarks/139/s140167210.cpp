#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  
  vector<vector<int>> graph(n+1);
  
  for(int i = 0; i < m; i++){
  	int a, b; cin >> a >> b;
  
  	graph[a].push_back(b);
  	graph[b].push_back(a);
  }
  
  queue<int> que;
  que.push(1);
  
  vector<int> seen(n+1, -1);
  seen[1] = 1;
  
  vector<int> parent(n+1);
  
  while(!que.empty()){
  	int nv = que.front();
    que.pop();
  
  	for(int v : graph[nv]){
    	if(seen[v] != -1) continue;
      	que.push(v);
      
      	seen[v] = 1;
      
      	parent[v] = nv;
  	}
  
  }
  
  cout << "Yes" << endl;
  for(int i = 2; i <= n; i++) cout << parent[i] << endl;
}
