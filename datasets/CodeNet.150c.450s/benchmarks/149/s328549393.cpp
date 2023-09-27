#include<cstdio>

int n,q;
int par[10000];
int rank[10000];

void init(){
  for(int i=0;i<n;i++){
    par[i] = i;
    rank[i] = 0;
  }
}

int find(int x){
  if(par[x]==x) return x;
  else return par[x] = find(par[x]);
}

void unite(int x,int y){
  x = find(x);
  y = find(y);
  if(x==y) return;
  if(rank[x]<rank[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if(rank[x]==rank[y]) rank[x]++;
  }
}

void same(int x,int y){
  if(find(x)==find(y)) printf("1\n");
  else printf("0\n");
}

int main(){
  scanf("%d %d",&n,&q);
  init();
  for(int i=0;i<q;i++){
    int cmd,x,y;
    scanf("%d %d %d",&cmd,&x,&y);
    if(cmd==0) unite(x,y);
    if(cmd==1) same(x,y);
  }
  return 0;
}