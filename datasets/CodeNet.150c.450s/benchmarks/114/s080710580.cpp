#include<bits/stdc++.h>
#define inf 10000000
using namespace std;
int main(){
  int n,d[101][101],a[101],ans=0,c[101]={};
  cin>>n;
  for(int i=0;i<n;i++)a[i]=inf;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      cin>>d[i][j];
      if(d[i][j]==-1)d[i][j]=inf;    
    }
  a[0]=0;
  int s=0;
  while(1){
    c[s]=1;
    ans+=a[s];
    int mn=inf,ns=-1;
    for(int i=0;i<n;i++)
      a[i]=min(a[i],d[s][i]);

    for(int i=0;i<n;i++)
      if(!c[i]&&a[i]<mn)ns=i,mn=a[i];

    if(ns==-1)break;
    s=ns;
  }
  cout<<ans<<endl;
  return 0;
}