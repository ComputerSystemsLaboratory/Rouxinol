#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>

using namespace std;
typedef long long ll;


int main(){
  ll N,M;
  cin >> N >> M;
  ll a[M],b[M];
  vector<vector<int> > G(N);
  for(ll i=0;i<M;i++){
    cin >> a[i] >> b[i];
    G[a[i]-1].push_back(b[i]-1);
    G[b[i]-1].push_back(a[i]-1);
  }
  vector<int> dist(N, -1);
  vector<int> ans(N);
  queue<int> que;
  dist[0] = 0;
  ans[0] = 1;
  que.push(0); 
  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int nv : G[v]) {
      if (dist[nv] != -1) continue; 
      dist[nv] = dist[v] + 1;
      ans[nv] = v+1;
      que.push(nv);
    }
  }
  bool ok = true;
  for(ll i=0;i<N;i++){
    if(dist[i]<0) ok=false;
  }
  if(ok){
    cout << "Yes" << endl;
    for(int j=1;j<N;j++){
      cout << ans[j] << endl;
    }
  }else{
    cout << "No" << endl;
  }
}
