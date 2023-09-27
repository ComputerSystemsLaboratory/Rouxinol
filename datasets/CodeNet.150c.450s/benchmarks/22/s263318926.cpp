#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")    
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define INF 9999999999
#define rep(i,m,n) for(lli i = m;i < n;i++)
#define rrep(i,m,n) for(lli i=m-1;i>=n;i--)
#define pb(n) push_back(n)
#define UE(N) N.erase(unique(N.begin(),N.end()),N.end());
#define Sort(n) sort(n.begin(), n.end())
#define Rev(n) reverse(n.begin(),n.end())
#define Out(S) cout << S << endl
#define NeOut(S) cout << S
#define HpOut(S) cout << setprecision(50) << S << endl
#define Vec(K,L,N,S) vector<L> K(N,S)
#define DV(K,L,N,M,S) vector<vector<L>> K(N,vector<L>(M,S))
#define TV(K,L,N,M,R,S) vector<vector<vector<L>>> K(N,vector<vector<L>>(M,vector<L>(R,S)))
#define pint pair<lli,lli>
#define paf(L,R) pair<L,R>
#define mod 998244353
#define MAX 10000000
#define ALL(a)  a.begin(),a.end()
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli A,B,C,D,E,F,K,N,M,L,X,Y,Z,H,W,sum=0,num=0,flag=0;string S,T;
  cin >> N >> M >> L;
  Vec(dp,lli,N,INF);//dp[i]:頂点Lから頂点iまでの最短経路のコスト
  DV(G,pint,N,0,pint(0,0));//G[i][j]:頂点iから出たj番目の辺の終点とコスト
  rep(i,0,M){
    cin >> X >> Y >> Z;
    G[X].pb(pint(Y,Z));
  }
  dp[L]=0;
  rep(i,0,N-1)rep(j,0,N)for(auto v:G[j])if(dp[j]!=INF)chmin(dp[v.first],dp[j]+v.second);
  rep(i,0,N)for(auto v:G[i])if(dp[i]!=INF&&dp[v.first]>dp[i]+v.second)flag=true;
  if(flag)Out("NEGATIVE CYCLE");
  else{
    rep(i,0,N){
      if(dp[i]==INF)Out("INF");
      else Out(dp[i]);
    }
  }
}

