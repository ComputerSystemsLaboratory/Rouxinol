#include <cstdio>
#include <iostream>
#include <vector>

#define N 100000

using namespace std;

vector<int> G[N];
int color[N];

void dfs(int s,int c){
  color[s]=c;
  for(int i=0;i<G[s].size();i++){
    if(color[G[s][i]]!=c) dfs(G[s][i],c);
  }
}

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++) color[i]=-1;
  for(int i=0;i<m;i++){
    int s,t;
    scanf("%d %d",&s,&t);
    G[s].push_back(t);
    G[t].push_back(s);
  }
  int q; scanf("%d",&q);
  for(int i=0;i<n;i++){
    if(color[i]==-1)
      dfs(i,i); //node_id and color_id
  }
  for(int i=0;i<q;i++){
    int s,t;
    scanf("%d %d",&s,&t);
    if(color[s]==color[t]) cout << "yes\n";
    else cout << "no\n";
  }
}