#include<bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = (n)-1; i >= 0; i--)
#define rep1(i,n) for(int i = 1; i <= (n); i++)
#define rrep1(i,n) for(int i = (n); i > 0; i--)

#define ll long long
#define pi pair<int, int>
#define pll pair<ll, ll>

#define MOD 1000000007
#define INF 1000000000000000LL

using namespace std;

#define MAXV 100

int main(){
  int v,e;cin>>v>>e;
  ll g[MAXV][MAXV];
  rep(i,v)rep(j,v)g[i][j]=INF;
  rep(i,v)g[i][i]=0;
  rep(i, e){
    int s,t,d;cin>>s>>t>>d;
    g[s][t]=d;
  }

  rep(k, v)rep(i, v)rep(j, v)if(g[i][k]!=INF && g[k][j]!=INF)g[i][j] = min(g[i][j], g[i][k]+g[k][j]);

  rep(i, v)if(g[i][i]<0){cout<<"NEGATIVE CYCLE"<<endl; return 0;}

  rep(i, v){
    rep(j, v){
      if(g[i][j]==INF)cout<<"INF";
      else cout<<g[i][j];
      if(j<v-1)cout<<' ';
    }
    cout<<endl;
  }

  return 0;
}

