#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vl ;
typedef pair<ll,ll> pl;
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define rep(i,N) for(int i=0; i < (int)N; i++)
#define all(v) (v).begin(),(v).end()
//#define max(a,b) (a>b ? a : b)
//#define min(a,b) (a<b ? a : b)
 
const int MOD = 998244353;
const int INF = 1000002;
const double PI =4*atan(1);
const double eps = 1e-7;
const long long oo = 1e18;

int resolve(string S, string T){
  int s = (int)S.size(), t = (int)T.size();
  vector<vector<int>> dp(s+1, vector<int>(t+1, 0));
  rep(i, s+1) dp[i][0] = i;
  rep(i, t+1) dp[0][i] = i;

  for(int i=0; i<s; i++){
    for(int j=0; j<t; j++){
      dp[i+1][j+1] = min({dp[i+1][j]+1, dp[i][j+1]+1, dp[i][j]+(S[i]==T[j] ? 0 : 1)});
    }
  }
  return dp[s][t];
}

int main(){
  string S, T;
  cin >> S >> T;
  cout << resolve(S, T) << endl;
}
