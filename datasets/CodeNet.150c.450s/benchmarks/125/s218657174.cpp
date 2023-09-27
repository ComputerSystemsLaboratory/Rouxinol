#include<iostream>
#include<algorithm>
using namespace std;

int n;
int t = 0; //time
int d[110] = {}; //discover
int f[110]; //finish
bool a[110][110] = {}; //adjacency matrix

void dfs(int u){
  d[u] = ++t; //record the discovering time

  //if be adjoining and have not been discovered, search
  for(int i = 1;i <= n;i++) if(a[u][i] && d[i] == 0) dfs(i);
  
  f[u] = ++t; //record the finishing time
}

int main(){
  
  int u, k, v;

  //input
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> v;
      a[u][v] = true;
    }
  }

  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n;j++){
      //if be adjoining and have not been discovered, search
      if(a[i][j] && d[i] == 0) dfs(i);
    }
  }

  //output
  for(int i = 1;i <= n;i++) cout << i << " " << d[i] << " " << f[i] << endl;
  
  return 0;
}


