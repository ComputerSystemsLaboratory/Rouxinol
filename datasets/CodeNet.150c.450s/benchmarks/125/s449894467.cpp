#include <iostream>

using namespace std;

#define MAX 100

int n,Time;
int G[MAX][MAX],d[MAX],f[MAX];
bool used[MAX];

void dfs(int v){
  d[v] = Time++;
  used[v] = true;

  for(int i = 0 ; i < n ; i++){
    if(!used[i] && G[v][i]){
      dfs(i);
    }
  }

  f[v] = Time++;
}

int main(){
  cin >> n;

  for(int i = 0 ; i < n ; i++){
    int u,k,v;
    cin >> u >> k;
    for(int j = 0 ; j < k ; j++){
      cin >> v;
      G[u-1][v-1] = v-1;
    }
  }

  Time = 1;
  for(int i = 0 ; i < n ; i++){
    if(!used[i]){
      dfs(i);
    }
  }

  for(int i = 0 ; i < n ; i++){
    cout << i+1 << " " << d[i] << " " << f[i] << endl;
  }

  return 0;
}