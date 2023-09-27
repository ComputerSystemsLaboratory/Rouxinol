#include <bits/stdc++.h>
#define ALL(a)  (a).begin(),(a).end()
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<long long, long long> Pll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
template <typename T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template <typename T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;

int main(){
  ll V, E;
  cin >> V >> E;
  vvll dp(V, vll(V, INF));
  for(int i = 0; i < V; i++){
    dp.at(i).at(i) = 0;
  }
  for(int i = 0; i < E; i++){
    int s, t, d;
    cin >> s >> t >> d;
    dp.at(s).at(t) = d;
  }
  for(int k = 0; k < V; k++){
    for(int i = 0; i < V; i++){
      for(int j = 0; j < V; j++){
        if(dp.at(i).at(k) == INF || dp.at(k).at(j) == INF) continue;
        chmin(dp.at(i).at(j), dp.at(i).at(k) + dp.at(k).at(j));
      }
    }
  }
  bool flag = true;
  for(int i = 0; i < V; i++){
    if(dp.at(i).at(i) < 0) flag = false;
  }
  if(flag){
    for(int i = 0; i < V; i++){
      for(int j = 0; j < V; j++){
        if(dp.at(i).at(j) != INF) cout << dp.at(i).at(j);
        else cout << "INF";
        if(j == V-1) cout << endl;
        else cout << ' ';
      }
    }
  }
  else cout << "NEGATIVE CYCLE" << endl;
  
  
}

