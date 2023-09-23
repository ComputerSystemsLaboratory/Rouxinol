#include<bits/stdc++.h>
using namespace std;
int num;  int n,s;
void dfs(int i,int sum,int dp){
  if(sum>s)
    return;
  if(dp==n){
    if(sum==s){
      num++;
      return;
    }else
      return;
  }
  for(int j=i+1;j<=9;j++)
    dfs(j,sum+j,dp+1);
}
int main(){
  while(cin>>n>>s,n+s!=0){
    num=0;
    for(int i=0;i<=9;i++)
      dfs(i,i,1);
    cout<<num<<endl;
  }
  return 0;
}