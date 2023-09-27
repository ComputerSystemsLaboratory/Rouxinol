#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
const int MAXN = 10000;
int n;
int vs[MAXN];
int d[MAXN];
void bfs(int s,vector<vector<int> > &g){
  queue<int> q;
  q.push(s);
  fill(d,d+MAXN,-1);
  d[s] = 0;
  while(!q.empty()){
    int current = q.front();q.pop();
    for(int next:g[current]){
      if(d[next] < 0){
        q.push(next);
        d[next] = d[current] + 1;
      }
    }
  }
}
int main(){
  cin >> n;
  vector<vector<int> > g(n+1);
  for(int i = 1;i <= n;i++){
    int u,k;
    cin >> u >> k;
    for(int j = 0; j < k;j++){
      int v;
      cin >> v;
      g[u].push_back(v);
    }
  }
  bfs(1,g);
  for(int i = 1;i <= n;i++){
    cout << i << ' ' << d[i] << endl;
  }
}