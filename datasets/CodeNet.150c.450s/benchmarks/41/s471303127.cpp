#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
//#define ll long long
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define rep(i, n) REP(i, 0, n)
#define rep_rev(i, n) for (int (i) = (int)(n) - 1 ; (i) >= 0 ; --(i))
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
#define all(x) (x).begin(),(x).end()
ll t1,t2,t3;
const ll mod = 1000000007;
const int INF = 1e9;
const ll INFLONG = 1e18;

int main(){
  ll V,E;
  cin >> V >> E;
  vector<vector<ll>> vec(V,vector<ll>(V,INFLONG));
  rep(i,V){
    vec[i][i] = 0;
  }
  rep(i,E){
    cin >> t1 >> t2 >> t3;
    vec[t1][t2] = t3;
  }
  rep(k,V){
    rep(i,V){
      rep(j,V){
        chmin(vec[i][j],vec[i][k] + vec[k][j]);
      }
    }
  }
  bool can = true;
  rep(i,V){
    if(vec[i][i] < 0){
      can = false;
    }
  }
  if(can){
    rep(i,V){
      rep(j,V){
        if(vec[i][j] >= INFLONG/100){
          cout << "INF";
        }else{
          cout << vec[i][j];
        }
        if(j != V-1){
          cout << " ";
        }
      }
      cout << endl;
    }
  }else{
    cout << "NEGATIVE CYCLE" << endl;
  }
}
