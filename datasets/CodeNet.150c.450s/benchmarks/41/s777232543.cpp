#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define INF 999999999999999999
#define rep(i,m,n) for(lli i = m;i < n;i++)
#define rrep(i,m,n) for(lli i=m-1;i>=n;i--)
#define pb(n) push_back(n)
#define UE(N) N.erase(unique(N.begin(),N.end()),N.end());
#define Sort(n) sort(n.begin(), n.end())
#define Rev(n) reverse(n.begin(),n.end())
#define Out(S) cout << S << endl
#define NeOut(S) cout << S
#define HpOut(S) cout << setprecision(25) << S << endl
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
  lli A,B,C,D,E,F,N,M,K,L,X,Y,Z,H,W,sum=0,num=0,flag=0;string S,T;
  cin >> N >> M;
  DV(G,lli,N,N,INF);
  rep(i,0,M){
    cin >> A >> B >> C;
    G[A][B]=C;
  }
  rep(i,0,N)G[i][i]=0;
  rep(i,0,N)rep(j,0,N)rep(k,0,N)if(G[i][k]!=INF&&G[j][i]!=INF)G[j][k]=min(G[j][k],G[j][i]+G[i][k]);
  rep(i,0,N)if(G[i][i]<0){
    flag=1;
    Out("NEGATIVE CYCLE");
    break;
  }
  if(!flag)rep(i,0,N){
    rep(j,0,N){
      if(j>0)NeOut(' ';)
      if(G[i][j]==INF)cout << "INF";
      else cout << G[i][j];
    }
    Out("");
  }
}



