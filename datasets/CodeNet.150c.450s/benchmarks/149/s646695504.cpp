#include<stdio.h>
#include<algorithm>
using namespace std;
int par[100005],com[100005],x[100005],y[100005];
int n,q;

void init(int u){
  for(int i=0;i<u;i++){
    par[i]=i;
  }
}

int find(int x){
  if(par[x]==x){
    return x;
  }else{
    return par[x]=find(par[x]);
  }
}

void unite (int x, int y){
  x=find(x);
  y=find(y);
  if(x==y) return;
  par[y]=x;
}

bool same(int x,int y){
  return find(x)==find(y);
}

int main(){
  scanf("%d%d",&n,&q);
  for(int i=0;i<q;i++){
    scanf("%d%d%d",&com[i],&x[i],&y[i]);
  }

  init(n);

  for(int i=0;i<q;i++){
    if(com[i]==0){
      unite(x[i],y[i]);
    }else{
      printf("%d\n",same(x[i],y[i]));
    }
  }

  return 0;
}