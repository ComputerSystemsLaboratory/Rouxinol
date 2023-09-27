#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i,m){
    int x,y;
    cin >> x >> y;
    g[x-1].push_back(y-1);
    g[y-1].push_back(x-1);
  }
  vector<int> dist(n,-1);
  vector<int> ans(n,0);
  queue<int> que;
  dist[0]=0;
  que.push(0);
  while(!que.empty()){
    int x=que.front();que.pop();
    for(int y:g[x]){
      if(dist[y]==-1){
        dist[y]=dist[x]+1;
        ans[y]=x;
        que.push(y);
      }
    }
  }
  cout << "Yes" << endl;
  rep(i,n-1) cout << ans[i+1]+1 << endl;
    
}
