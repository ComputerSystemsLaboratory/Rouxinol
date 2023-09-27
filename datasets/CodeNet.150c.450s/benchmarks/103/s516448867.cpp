#include<bits/stdc++.h>
using namespace std;

int n,s;
int ans;

void dfs(int x,int now,int co);

int main(){
  while(1){
    cin>>n>>s;
    if(!n && !s)break;
    ans=0;
    dfs(-1,0,0);
    cout<<ans<<endl;
  }
}

void dfs(int x,int now,int co){
  if(co==n && now==s){
    ans++;
    return;
  }
  if(now>s)return;
  for(int i=x+1;i<=9;i++){
    dfs(i,now+i,co+1);
  }
  return;
}
  