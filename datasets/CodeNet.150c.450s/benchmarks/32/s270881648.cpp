#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int m,nmin,nmax,ans=0,max=0,p[200]={};
  cin>>m>>nmin>>nmax;
  if(m+nmin+nmax==0)break;
  for(int i=0;i<m;i++)cin>>p[i];
  for(int i=nmin;i<=nmax;i++)
    if(p[i-1]-p[i]>=max){
      max=p[i-1]-p[i];
      ans=i;
    }
  cout<<ans<<endl;
  }
  return 0;
}