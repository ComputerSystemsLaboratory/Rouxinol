#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> G(n);
  rep(i,m){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  vector<int> ans(n,-1);
  queue<int> que;
  ans.at(0)=0;
  que.push(0);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(int nv: G[v]){
      if(ans.at(nv)!=-1){
        continue;
      }
      ans.at(nv)=v;
      que.push(nv);
    }
  }
  cout << "Yes" << endl;
  for(int i=1;i<n;i++){
    ans.at(i)++;
    cout << ans.at(i)<< endl;
  }
}