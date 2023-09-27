#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

int main(){
  int n,m;
  cin >> n >> m;
  vvi graph(n+1);
  rep(i,m){
    int a,b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  vi dist(n+1, -1);
  queue<int> que;
  dist[1] = 0;
  que.push(1);
  while(!que.empty()){
 //   cout << 1;
    int v = que.front();
    que.pop();
    for(int nv : graph[v]){
      //cout << 2;
      if(dist[nv] != -1) continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  cout << "Yes" << endl;
  for(int i=2; i<=n; i++){
    for(int v : graph[i]){
      if(dist[i] - dist[v] == 1){
        cout << v << endl;
        break;
      }
    }
  }
}
