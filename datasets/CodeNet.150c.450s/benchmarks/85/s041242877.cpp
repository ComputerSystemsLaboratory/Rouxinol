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
  ll n;
  cin >> n;
  vector<ll> vec(n+1,0);
  vector<vector<ll>> mul(n+1,vector<ll>(n+1,100000));
  for(int i = 1;i <= n;i++){
    mul[i][i] = 0;
  }
  rep(i,n){
    cin >> t1 >> t2;
    vec[i] = t1;
    vec[i+1] = t2;
  }
  for(int l = 2;l <= n;l++){
    for(int i = 1;i <= n-l+1;i++){
      int j = i + l - 1;
      mul[i][j] = (1 << 21);
      for(int k = i;k <= j-1;k++){
        chmin(mul[i][j],mul[i][k] + mul[k+1][j] + vec[i-1] * vec[k] * vec[j]);
      }
    }
  }
  cout << mul[1][n] << endl;
}
