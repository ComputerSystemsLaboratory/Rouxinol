#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int pa[MAX];
int ra[MAX];
void init(){
  for(int i=0;i<MAX;i++){
    pa[i]=i;
    ra[i]=0;
  }
}

int find(int x){
  if(pa[x]==x)return x;
  else return pa[x]=find(pa[x]);
}

void unite(int x,int y){
  x=find(x),y=find(y);
  if(x==y)return;
  if(ra[x]<ra[y])swap(x,y);
  pa[y]=x;
  if(ra[x]==ra[y])ra[x]++;
}

bool same(int x,int y){
  return (find(x)==find(y));
}

int n,m,q,a,b;
int main(){
  init();
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&a,&b);
    unite(a,b);
  }
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d %d",&a,&b);
    cout<<(same(a,b)?"yes":"no")<<endl;
  }
  return 0;
}