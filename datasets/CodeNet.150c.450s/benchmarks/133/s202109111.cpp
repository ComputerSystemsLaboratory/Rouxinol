#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1e9
#define PI 3.14159265359
#define MOD 1000000007
#define ALL(v) v.begin(),v.end()
#define ALLR(v) v.rbegin(),v.rend()
typedef long long ll;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
//isPrime
//modpow modinv
//getDigit
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
int main() {
  cout << fixed << setprecision(10);
  int d;
  cin >> d;
  vector<int> c(26);
  rep(i,26)cin>>c[i];
  vector<vector<int>> s(d,vector<int>(26));
  rep(i,d){
    rep(j,26)cin>>s[i][j];
  }
  vector<int> t(d);
  rep(i,d)cin>>t[i];
  ll ans = 0;
  vector<int> last(26,0);
  rep(i,d){
    ans+=s[i][t[i]-1];
    last[t[i]-1]=i+1;
    rep(j,26){
      ans-=c[j]*(i+1-last[j]);
    }
    cout << ans << endl;
  }

}
