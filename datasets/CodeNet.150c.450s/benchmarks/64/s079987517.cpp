#include<bits/stdc++.h>
#define N 20
using namespace std;
int n,A[N],q,m;
bool ans;

void dfs(int x,int s){
  if(x==n){
    if(s==m)ans=true;
    return;
  }
  dfs(x+1,s+A[x]);
  dfs(x+1,s);
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>A[i];
  cin>>q;
  while(q--){
    cin>>m;
    ans=0;
    dfs(0,0);
    if(ans)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}