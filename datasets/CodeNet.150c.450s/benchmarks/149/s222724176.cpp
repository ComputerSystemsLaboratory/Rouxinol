#include<cstdio>

struct union_find{
  int par[10000];
  int rank[10000];

  union_find(){
    for(int i=0;i<10000;i++){
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
    if(rank[x]<rank[y]){
      par[x] = y;
    }else{
      par[y] = x;
      if(rank[x]==rank[y]) rank[x]++;
    }
  }
  bool same(int x,int y){return find(x)==find(y);}
};

int main(){
  int n,q;
  union_find uf;
  scanf("%d %d",&n,&q);
  for(int i=0;i<q;i++){
    int cmd,x,y;
    scanf("%d %d %d",&cmd,&x,&y);
    if(cmd==0) uf.unite(x,y);
    else if(cmd==1){
      if(uf.same(x,y)) printf("1\n");
      else printf("0\n");
    }
  }
  return 0;
}