#include<bits/stdc++.h>
#define N 100005
using namespace std;
vector<int> e[N];
int n,m,q,s,t,cnt;
int used[N];

void dfs(int x){
  if(used[x])return;
  used[x]=cnt;
  for(int i=0;i<e[x].size();i++)
    dfs(e[x][i]);
}

int main(){
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>s>>t;
    e[s].push_back(t);
    e[t].push_back(s);
  }
  cnt=1;
  for(int i=0;i<n;i++){
    if(!used[i])dfs(i),cnt++;
  }
  cin>>q;
  while(q--){
    cin>>s>>t;
    if(used[s]==used[t])cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}