#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int c[m];
  int t[n+1];
  memset(t,50001,sizeof(t));
  t[0]=0;
  for(int i=0;i<m;i++){
    cin>>c[i];
  }
  for(int i=0;i<m;i++){
    for(int j=c[i];j<=n;j++){
      t[j]=min(t[j],t[j-c[i]]+1);
    }
  }
  cout<<t[n]<<endl;
}