#include <iostream>
using namespace std;

int a[2001];

int dfs(int n,int i,int sum,int m){
  if(i>n||sum>m)return 0;
  if(sum==m)return 1;
  int b = dfs(n,i+1,sum+a[i],m) || dfs(n,i+1,sum,m);
  return b;
}

int main(){
  int n,q,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>m;
    if(dfs(n,0,0,m))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}