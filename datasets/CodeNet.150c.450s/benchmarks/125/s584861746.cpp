#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
bool visit[100];
int finish_time[100];
int find_time[100];
int t;
vector<int> E[100];
void dfs(int u){
  visit[u] = true;
  find_time[u] = ++t;
  for(int v : E[u]) if(!visit[v]) dfs(v);
  finish_time[u] = ++t;
}

int main(){
  int n;
  cin >> n;
  rep(i,n){
    int u,k;
    cin >> u >> k;
    u--;
    rep(j,k){
      int v;
      cin >> v;
      v--;
      E[u].push_back(v);
    }
  }
  rep(i,n) if(!visit[i]) dfs(i);
  rep(i,n){
    cout << i+1 << " " << find_time[i] << " " << finish_time[i] << endl;
  }
  return 0;
}

