#include <bits/stdc++.h>

using namespace std;

int n, t;
vector< vector<int> > edges(100);
vector< pair<int,int> > ans(100);
vector< bool > vis(100, false);

void dfs(int v){
  t++;
  vis[v] = true;
  ans[v].first = t;
  for(int i : edges[v])
    if(vis[i] == false)
      dfs(i);
  t++;
  ans[v].second = t;
}

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int k;
    cin >> k >> k;
    for(int j = 0; j < k; j++){
      int to;
      cin >> to;
      edges[i].push_back(to-1);
    }
  }

  t = 0;
  for(int i = 0; i < n; i++){
    if(vis[i] == false)
      dfs(i);
  }
  for(int i = 0; i < n; i++){
    cout << i + 1 << ' ' <<  ans[i].first << ' ' << ans[i].second << endl;
  }
}