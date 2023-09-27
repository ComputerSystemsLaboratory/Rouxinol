#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<n;++i)
int main(){
  int n,m,a;
  while(cin>>n>>m,n){
    int tsum=0,hsum=0;
    int t[100]={},h[100]={};
    REP(i,n){
      cin>>t[i]; tsum+=t[i];
    }
    REP(i,m){
      cin>>h[i]; hsum+=h[i];
    }
    int diff=tsum-hsum;
    sort(t,t+n);
    sort(h,h+m);
    int x=0,y=0;
    REP(i,n) REP(j,m){
      if(2*(t[i]-h[j])==diff){
        x=t[i]; y=h[j];
        break;
      }
      if(x) break;
    }
    if(x) cout<<x<<" "<<y<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}