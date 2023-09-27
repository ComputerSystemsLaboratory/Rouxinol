#include <iostream>
using namespace std;

int n,v,u,k,Time,data[101][101],d[101],f[101];

//dfs
void visit(int u){
  int v;
  d[u] = Time++;
 
  for(v = 1; v <= n; v++){
    if(data[u][v]&d[v]==0)
      visit(v);
  }
  f[u] = Time++;
}
 
int main(){
  cin >> n;
  
  //初期化
  Time = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      data[i][j]=0;
      d[j]=0;
      f[j]=0;
    }
  }
  
  //入力
  for(int i = 0; i < n; i++){
    cin >> u >> k;
    for(int j = 0; j < k; j++){
      cin >> v;
      data[u][v]=1;
    }
  }
  
  //dfs
  for(int i = 1;i <= n; i++){
    if(d[i]==0)visit(i);
  }
  
  //出力
  for(int i = 1;i <= n; i++){
    cout << i << " " << d[i] << " " << f[i] << endl;
  }
  
  return 0;
}