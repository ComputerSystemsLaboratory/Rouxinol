#include<cstdio>
#include<array>
#include<vector>
#include<stack>
using namespace std;
const int MAX_V=101;
array<int,MAX_V> open{0};
array<int,MAX_V> close{0};
array<vector<int>,MAX_V> edge;
int t=0;

void dfs(int f){
  open[f]=++t;
  for(int a:edge[f]){
    if(open[a]==0){
      dfs(a);
    }
  }
  close[f]=++t;
}

int main(){
  int n;scanf("%d",&n);
  for(int i=0;i<n;i++){
    int u;scanf("%d",&u);
    int k;scanf("%d",&k);
    for(int j=0;j<k;j++){
      int v;scanf("%d",&v);
      edge[u].push_back(v);
    }
  }
  for(int i=0;i<n;i++)
    if(open[i+1]==0)
      dfs(i+1);
  for(int i=0;i<n;i++){
    printf("%d %d %d\n",i+1,open[i+1],close[i+1]);
  }
}