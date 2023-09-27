#include <bits/stdc++.h>
#define SIZE 300005
#define MOD 1000000007LL
#define INF 1 << 30
#define LLINF 1LL << 60
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define DOWN(i,b,a) for(int i=b;i>=a;i--)
#define SET(a,c) memset(a,c,sizeof a)
#define BIT(i,j) ((i)>>(j))&1
#define ALL(o) (o).begin(), (o).end()
#define ERASE(o) (o).erase(unique((o).begin(),(o).end()), (o).end())
#define SQ(x) ((x)*(x))
using namespace std;
typedef long long ll;
typedef pair<ll,ll> Pll;
typedef pair<int, int> Pii;
typedef pair<double, double> Pdd;
typedef complex<double> dcomplex;
template<typename T> inline void priv(vector<T>a){REP(i,a.size()){cerr<<a[i]<<((i==a.size()-1)?"\n":" ");}}
ll gcd(ll a,ll b){int c=max(a,b);int d=min(a,b);return c==0||d==0?c:gcd(c%d,d);}
ll lcm(ll a,ll b){return a==0||b==0?0:a*b/gcd(a,b);}
ll fact(ll a){ll b=1;FOR(i,1,a)b*=i;return b;}

int solve(string s, string t)
{
  int sn = s.size();
  int tn = t.size();
  vector<vector<int>> dp(sn+1,vector<int>(tn+1,0));
  REP(i,sn+1) dp[i][0] = i;
  REP(i,tn+1) dp[0][i] = i;
  FOR(i,1,sn) FOR(j,1,tn)
    dp[i][j] = min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+(s[i-1]!=t[j-1])});
  return dp[sn][tn];
}

int main()
{
  string s, t; cin >> s >> t;
  cout << solve(s,t) << endl;
  return 0;
}