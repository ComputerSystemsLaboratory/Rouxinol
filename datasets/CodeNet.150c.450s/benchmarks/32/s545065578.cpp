#include<bits/stdc++.h>
using namespace std;

int main(){
  while(1){
      int m,nmin,nmax,max,ans=0,ansp=0;
  int p[201];
  cin>>m>>nmin>>nmax;
  if(m+nmin+nmax==0) break;
  for(int i=0;i<m;i++)cin>>p[i];
  sort(p,p+m);
  for(int i=nmin;i<=nmax;i++){
    max=p[m-i]-p[m-i-1];
    if(ans<=max)ans=max,ansp=i;
  }
  cout<<ansp<<endl;
  }
  return 0;
}