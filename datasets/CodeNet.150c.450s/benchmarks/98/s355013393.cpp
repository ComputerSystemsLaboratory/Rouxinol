#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
int n,m;
void proc(){
  int d1[100],d2[100];
  int sum1=0,sum2=0;
  rep(i,n){
    cin>>d1[i];
    sum1+=d1[i];
  }
  rep(i,m){
    cin>>d2[i];
    sum2+=d2[i];
  }
  if((sum1+sum2)&1){
    cout<<-1<<endl;
    return;
  }
  int msum=400,m1,m2;
  rep(i,n){
    rep(j,m){
      if(sum1-d1[i]+d2[j]==sum2-d2[j]+d1[i]&&msum>d1[i]+d2[j]){
        msum=d1[i]+d2[j];
        m1=d1[i];m2=d2[j];
      }
    }
  }
  if(msum!=400){
    cout<<m1<<" "<<m2<<endl;
  }else{
    cout<<-1<<endl;
  }
}

int main(){
  while(true){
    cin>>n>>m;
    if(!n&&!m)return 0;
    proc();
  }
}