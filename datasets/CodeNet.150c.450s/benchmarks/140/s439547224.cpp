// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=jp
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

#define INFint 2e9+1

int main(){
  int V,E;
  cin>>V>>E;
  vector<pair<int,int>> G[100001];
  for(int i(0);i<E;i++){
    int s,t,w;
    cin>>s>>t>>w;
    G[s].push_back({w,t});
    G[t].push_back({w,s});
  }

  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;// cost,to
  q.push({0,1});
  vector<bool> visited(V+1,false);

  ll sum(0);
  while(!q.empty()){
    pair<int,int> now = q.top();q.pop();
    if(visited[now.second]) continue;
    sum += now.first; 
    visited[now.second] = true;
    for (auto next: G[now.second]){
      if (visited[next.second] == false) q.push(next);
    }
  }
  cout << sum << endl;
  return 0;
}


