#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define P pair<int, int>

using namespace std;
const int MAX = 1<<30;

int main(){
  int n, d[109];
  vector<P> G[109];
  queue<int> Q;
  cin >> n;
  for(int i=0;i<n;i++){
    int u, k, v, c;
    cin >>u >> k;
    for(int j=0;j<k;j++){
      cin >> v >> c;
      G[u].push_back(P(v, c));
    }
    d[i] = MAX;
  }
  d[0] = 0;
  Q.push(0);
  while(!Q.empty()){
    int cur = Q.front();Q.pop();
    for(int i=0;i<G[cur].size();i++){
      int next = G[cur][i].first, weight = G[cur][i].second;
      if(weight + d[cur]< d[next]){
        d[next] = weight + d[cur];
        Q.push(next);
      }
    }
  }
  for(int i=0;i<n;i++)cout << i << ' ' << d[i] << endl;
}
