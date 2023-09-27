#include <iostream>
#include <vector>

#define MAX 100000

using namespace std;

int visited[MAX];
//adjacent list
vector<int> G[MAX];

//can go from s to t or not
int color[MAX];

void dfs(int s,int c){
  color[s]=c;
  visited[s]=1;
  for(int i=0;i<G[s].size();i++){
    if(visited[G[s][i]]==0){
      dfs(G[s][i],c);
    }
  }
}

int main(){
  int n,m; cin >> n >> m;
  for(int i=0;i<m;i++){
    int x,y; cin >> x >> y;
    G[x].push_back(y);
    G[y].push_back(x);
  }

  //coloring
  for(int i=0;i<n;i++){
    visited[i]=0;
    color[i]=-1;
  }
  int c=0;
  for(int i=0;i<n;i++){
    if(color[i]==-1){
      dfs(i,c);
      c++;
    }
  }

  //question
  int q; cin >> q;
  for(int i=0;i<q;i++){
    int s,t; cin >> s >> t;
    if(color[s]==color[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}