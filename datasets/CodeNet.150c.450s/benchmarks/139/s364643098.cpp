#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 10000000;
#define rep(i,N) for(int i=0;i<int(N);++i)
int main(){
  ll N,M;
  cin >> N >> M;
  vector<vector<int>> v(N,vector<int>());
  rep(i,M){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    v.at(a).push_back(b);
    v.at(b).push_back(a);
  }
  queue<int> q;
  q.push(0);
  vector<int> dist(N,INF);
  dist.at(0) = 0;
  vector<int> pre(N,-1);
  while(!q.empty()){
    int k = q.front();
    q.pop();
    for(int l:v.at(k)){
      if(dist.at(l) != INF){
        continue;
      }
      dist.at(l) = dist.at(k) + 1;
      pre.at(l) = k;
      q.push(l);
    }
  }
  cout << "Yes" << endl;
  rep(i,N){
    if(i == 0)continue;
    cout << pre.at(i) + 1 << endl;
  }
  return 0;
}