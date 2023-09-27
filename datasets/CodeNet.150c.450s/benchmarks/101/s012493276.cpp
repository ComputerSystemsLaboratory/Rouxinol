#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int a[100000],gp[1000000],g=0;
int inf=100000,n,m;
vector< vector<int> > v(100000);
void dfs(int s){
    gp[s]=g;
    a[s]=inf;
    for(int i=0;i<(int)v[s].size();i++){
        if(a[v[s][i]]!=inf){
            dfs(v[s][i]);
        }
    }
}
int main(){
  cin>>n>>m;
  for(int i=0;i<m;i++){
      int tmp,u;
      cin>>tmp>>u;
      v[tmp].push_back(u);
      v[u].push_back(tmp);
  }
  dfs(0);
  for(int i=0;i<n;i++){
      g++;
      if(!a[i])dfs(i);
  }
  int qu;
  cin>>qu;
  int s[qu],t[qu];
  for(int i=0;i<qu;i++)cin>>s[i]>>t[i];
  for(int i=0;i<qu;i++){
      if(gp[s[i]]==gp[t[i]])
          cout<<"yes\n";
      else
          cout<<"no\n";
  }
}

