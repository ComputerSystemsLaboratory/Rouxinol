#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> gr(n);
  rep(i, m){
    int a, b;
    cin >> a >> b;
    gr.at(a).push_back(b);
    gr.at(b).push_back(a);
  }
  vector<int> team(n, -1);
  int co = 0;
  while(co < n){
    int nx = -1;
    rep(i, n){
      if(team.at(i) == -1){
        nx = i;
        team.at(nx) = nx;
        co++;
        break;
      }
    }
    queue<int> q;
    q.push(nx);
    while(!q.empty()){
      auto now = q.front(); q.pop();
      for(auto i : gr.at(now)){
        if(team.at(i) != -1) continue;
        team.at(i) = nx;
        co++;
        q.push(i);
      }
    }
  }

  int q;
  cin >> q;
  rep(_, q){
    int a, b;
    cin >> a >> b;
    if(team.at(a) == team.at(b)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}
