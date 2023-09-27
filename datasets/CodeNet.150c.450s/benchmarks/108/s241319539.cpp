#include <iostream>
#include <vector>
using namespace std;
 
static const  int N =  100;
static const  int no =  -1;
 
int graph[N][N] = {{}};
int d[N] = {};
int n;
 
void bfs(int v){
  vector<int> V;
  V.push_back(v);
  int u;
    for(int i = 1;i <= n; i++){
      d[i] = no;
     
}
  d[v] = 0;
 
  while(!V.empty()){
    u = V.front();
    V.erase(V.begin());
 
    for(int i = 1;i <= n; i++){
      if(graph[u][i] == 0) continue;
      if(d[i] != no) continue;
      d[i] = d[u] +1;
      V.push_back(i);
    }
  }
}
 
 
int main(){
  int u,v,k;
  cin >> n ;
 
  for(int i = 0; i < n; i++){
    cin >> u >> k ;
    for(int j = 0; j < k ; j++){
      cin >> v;
      graph[u][v] = 1;
    }
  }
 
 
  bfs(1);
 
  for(int i = 1;i <= n; i++){
    cout << i << " " << d[i] << endl;
  }
 
  return 0;
}