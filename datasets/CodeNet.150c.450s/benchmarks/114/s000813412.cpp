#include<iostream>
#include<algorithm>
using namespace std;

#define INF 2000

int n;
int cost[110][110], mincost[110];
bool used[110];

int prim(){
  
  for(int i = 0;i < n;i++){
    mincost[i] = INF;
    used[i] = false;
  }
  
  mincost[0] = 0;
  int ans = 0;
  
  while(true){
    
    int v = -1;
    
    for(int u = 0;u < n;u++){
      if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
    }
    
    if(v == -1) break;
    used[v] = true;
    ans += mincost[v];
    
    for(int u = 0;u < n;u++){
      mincost[u] = min(mincost[u], cost[v][u]);
    }
  }
  
  return ans;
}

int main(){
  
  cin >> n;
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      cin >> cost[i][j];
      if(cost[i][j] == -1) cost[i][j] = INF;
    }
  }
  
  cout << prim() << endl;
  
  return 0;
}
