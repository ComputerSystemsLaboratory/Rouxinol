#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

const int MAX=100;
const ll INF=10000000000;

ll d[MAX][MAX];
int n,e;

void floyd(){
  rep(k,n){
    rep(i,n){
      if(d[i][k]==INF) continue;
      rep(j,n){
        if(d[k][j]==INF) continue;
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
}

int main(){
  cin>>n>>e;
  
  rep(i,n){
    rep(j,n){
      if(i==j) d[i][j]=0;
      else d[i][j]=INF;
    }
  }
  
  ll s,t,u;
  rep(i,e){
    cin>>s>>t>>u;
    d[s][t]=u;
  }
  
  floyd();
  
  bool b=false;
  rep(i,n){
    if(d[i][i]<0) b=true;
  }
  if(b) cout<<"NEGATIVE CYCLE"<<endl;
  else{
    rep(i,n){
      rep(j,n){
        if(j) cout<<" ";
        if(d[i][j]==INF) cout<<"INF";
        else cout<<d[i][j];
      }
      cout<<endl;
    }
  }
  
  return 0;
}
