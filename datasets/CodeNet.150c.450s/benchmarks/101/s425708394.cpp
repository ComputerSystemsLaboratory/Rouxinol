#include <algorithm>
#include <cstdio>
using namespace std;

int par[100005];
int Rank[100005];

void init(int n){
  for(int i=0;i<n;i++){
    par[i]=i;
    Rank[i]=0;
  }
}

int find(int x){
  if(par[x]==x){
    return x;
  }else{
    return par[x]=find(par[x]);
  }
}

void unite(int x,int y){
  x=find(x);
  y=find(y);
  if(x==y)return;
  if(Rank[x]<Rank[y]){
    par[x]=y;
  }else{
    par[y]=x;
    if(Rank[x]==Rank[y])Rank[x]++;
  }
}

bool same(int x,int y){
  return find(x)==find(y);
}

int main(){
  int n,m,q,s,t;
  scanf("%d%d",&n,&m);
  init(n);
  for(int i=0;i<m;i++){
    scanf("%d%d",&s,&t);
    unite(s,t);
  }
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d%d",&s,&t);
    if(same(s,t))printf("yes\n");
    else printf("no\n");
  }
  return 0;
}