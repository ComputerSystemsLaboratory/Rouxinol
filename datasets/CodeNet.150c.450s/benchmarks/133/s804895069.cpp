#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<int(N);++i)
using i64 = int64_t;
using ll = long long;
int main() {
  int D;
  cin >> D;
  vector<int> c(26);
  rep(i,26){
    cin >> c.at(i);
  }
  vector<vector<int>> s(D,vector<int>(26));
  rep(i,D){
    rep(j,26){
      cin >> s.at(i).at(j);
    }
  }
  vector<int> t(D);
  rep(i,D){
    cin >> t.at(i);
    t.at(i) --;
  }
  int v = 0;
  vector<int> last(26,-1);
  rep(i,D){
    int up = s.at(i).at(t.at(i));
    int down = 0;
    last.at(t.at(i)) = i;
    rep(k,26){
      down += c.at(k) * (i - last.at(k));
    }
    v = v + up - down;
    cout << v << endl;
  }
  return 0;
}