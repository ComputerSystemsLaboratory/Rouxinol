#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
typedef pair<int, int> P_i;
typedef pair<double,double> P_d;
#define rep(i,n) for(int i=0;i<(n);++i)
#define alrep(i,j,n) for(int i=0;i<(n);++i)for(int j=i+1;j<(n);++j)
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;int ans=0;
#define answer cout << ans << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const int MOD=1e9+7;
const long long INF = 1LL << 60;

signed main(){

  string X,Y; cin >> X >> Y;
  vector<vector<int>> dp(1010,vector<int>(1010,INF));
  dp[0][0]=0;
  for(int i=-1;i<(int)X.size();i++) for(int j=-1;j<(int)Y.size();j++){
    if(i==-1 && j==-1) continue;
    if(i>=0 && j>=0){
      if(X[i]==Y[j]){
        chmin(dp[i+1][j+1],dp[i][j]);
      }
      else{
        chmin(dp[i+1][j+1],dp[i][j]+1);
      }
    }
    if(i>=0) chmin(dp[i+1][j+1],dp[i][j+1]+1);
    if(j>=0) chmin(dp[i+1][j+1],dp[i+1][j]+1);
  }
  cout << dp[X.size()][Y.size()] << endl;

  return 0;
}

