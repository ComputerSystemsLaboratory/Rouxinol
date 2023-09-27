#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define REP(i,n) for(int i=0; i < (n); ++i)
#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define INF 1e9
// constexpr ll INF = 1LL << 60;

void solve(int n){
  int w = 86400;
  vector<int> sum(w+1, 0);
  REP(i, n){
    string s, e;
    cin >> s >> e;
    int st = 0, et = 0;
    st += stoi(s.substr(0, 2))*3600+ stoi(s.substr(3,2))*60 + stoi(s.substr(6, 2));
    et += stoi(e.substr(0, 2))*3600+ stoi(e.substr(3,2))*60 + stoi(e.substr(6, 2));
    sum[st]++, sum[et]--;
  }
  int ans = sum[0];
  REP(i, w){
    sum[i+1] += sum[i];
    ans = max(ans, sum[i+1]);
  }
  cout << ans << endl;
}

int main(){
  while(true){
    int n;
    cin >> n;
    if(n == 0) break;
    solve(n);
  }
  
  return 0;
}


