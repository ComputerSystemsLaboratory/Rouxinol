#include <bits/stdc++.h>
#define FOR(i,l,r) for(size_t i=(l);i<(r);++i)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
const ll INF=1ll<<32;
int main(){
 ll v,e;
 cin>>v>>e;
 ll G[v][v];
 rep(i,v){
   rep(j,v){
     G[i][j]=INF;
     if(i==j)G[i][j]=0;
   }
 }

rep(i,e){
  ll s,t,d;
  cin>>s>>t>>d;
  G[s][t]=d;
}

 rep(k,v){
   rep(i,v){
     rep(j,v){
       if(G[i][k]!=INF&&G[k][j]!=INF){
       G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
       }
     }
   }
 }

rep(i,v){
  rep(j,v){
    if(G[i][j]+G[j][i]<0){
      cout<<"NEGATIVE CYCLE"<<endl;
      return 0;
    }
  }
}

 rep(i,v){
   rep(j,v){
     if(G[i][j]==INF){cout<<"INF";}
     else cout<<G[i][j];
     
     if(j==v-1){
       cout<<endl;
     }
     else cout<<' ';
   }
 }
}
