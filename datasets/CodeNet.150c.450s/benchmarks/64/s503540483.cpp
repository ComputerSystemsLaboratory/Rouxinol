#include<bits/stdc++.h>
using namespace std;

int n,a[20];

bool dfs(int j,int t){
  if(!t)return 1;
  bool res=0;
  for(int i=j;i<n;i++)res|=dfs(i+1,t-a[i]);
  return res;
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  int q,m;
  cin>>q;
  while(q--){
    cin>>m;
    if(dfs(0,m))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}