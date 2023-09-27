#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<n;++i)
#define FOR(i,a,b) for(int i=a;i<b;++i)
int main(){
  int n,y,m,d; cin>>n;
  REP(i,n){
    cin>>y>>m>>d;
    int ds=0;
    FOR(j,y+1,1000){
      if(j%3) ds+=(20+19)*5;
      else ds+=20*10;
    }
    if(y%3){
      if(m%2) ds+=21-d;
      else ds+=20-d;
      FOR(k,m+1,11){
        if(k%2) ds+=20;
        else ds+=19;
      }
    }else{
      ds+=21-d;
      ds+=20*(10-m);
    }
    cout<<ds<<endl;
  }
  return 0;
}