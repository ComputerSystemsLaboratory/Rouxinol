#include <iostream>
#include <queue>
using namespace std;

void dfs(int cur);
int df[100][2]={};
bool dc[100]={};
bool adj[100][100]={};//初期化を忘れない
int n,u,v,k;
int t = 1;
queue<int> q;

int main(){
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> u >> k;
    for (int j=0; j<k; j++){
      cin >> v;
      adj[u-1][v-1] = true;
    }
  }
  
  //探索は一回で終わるとは限らない　グラフは非連結の場合もある？
  for (int i=0; i<n; i++){
    if (dc[i] != true)
      dfs(i);
  }
  
  
  for (int i=0; i<n; i++)
    cout << i+1 << " " << df[i][0] << " " << df[i][1] << endl;

}

void dfs(int cur){
  dc[cur] = true;
  df[cur][0] = t;
  t += 1;
  for (int i=0; i<n; i++){
    if (adj[cur][i] && !dc[i]){
      dfs(i);
    }
  }
  df[cur][1] = t; 
  t += 1;
}