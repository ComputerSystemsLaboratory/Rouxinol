

#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define INF LLONG_MAX
#define ll long long
#define ull unsigned long long
#define M (int)(1e9+7)
#define P pair<int,int>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define int ll
#define vi vector<int>
#define IP pair<int,P>
#define PI pair<P,int>
#define PP pair<P,P>
#define Yes(f){cout<<(f?"Yes":"No")<<endl;}
#define YES(f){cout<<(f?"YES":"NO")<<endl;}
int Madd(int x,int y) {return (x+y)%M;}
int Msub(int x,int y) {return (x-y+M)%M;}
int Mmul(int x,int y) {return (x*y)%M;}

int EditDistance(string s,string t){
  vector<vi> dp(s.size()+1,vi(t.size()+1,inf));
  rep(i,s.size()+1) dp[i][0]=i;
  rep(j,t.size()+1) dp[0][j]=j;

  FOR(i,1,s.size()+1){
    FOR(j,1,t.size()+1){
      dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
      dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
      dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(s[i-1]!=t[j-1]));
    }
  }

  return dp[s.size()][t.size()];
}



signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout<<fixed<<setprecision(20);

  string s,t;
  cin>>s>>t;

  cout<<EditDistance(s,t)<<endl;


}
