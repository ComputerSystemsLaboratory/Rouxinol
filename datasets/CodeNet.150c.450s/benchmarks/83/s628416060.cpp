#include<bits/stdc++.h>
using namespace std;
#define r(i,n) for(int i=0;i<n;i++)
int a[101][10001],v[1001],w[1001],b,n;
int dp(int i,int j){
  if(a[i][j])return a[i][j];
  int res;
  if(i==n)res=0;
  else if(j<w[i])res=dp(i+1,j);
  else res=max(dp(i+1,j),dp(i+1,j-w[i])+v[i]);
  return a[i][j]=res;
}
int main(){
  cin>>n>>b;
  r(i,n)cin>>v[i]>>w[i];
  cout<<dp(0,b)<<endl;
}