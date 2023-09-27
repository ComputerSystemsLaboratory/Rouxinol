#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=9000000009;

int M[101][101]={};

signed main(){
  int V,E;
  cin>>V>>E;
  REP(i,V)REP(j,V)M[i][j]=i==j?0:INF;
  REP(i,E){
    int s,d,c;
    cin>>s>>d>>c;
    M[s][d]=c;
  }
  REP(k,V)REP(i,V)REP(j,V){
    if(M[i][k]!=INF&&M[k][j]!=INF){
      M[i][j]=min(M[i][j],M[i][k]+M[k][j]);
    }
  }
  bool nega=false;
  REP(i,V)if(M[i][i]<0)nega=true;
  if(nega){
    cout<<"NEGATIVE CYCLE"<<endl;
  }else{
    REP(i,V){
      REP(j,V){
        if(j)cout<<' ';
        if(M[i][j]==INF)cout<<"INF";
        else cout<<M[i][j];
      }
      cout<<endl;
    }
  }
  return 0;
}

