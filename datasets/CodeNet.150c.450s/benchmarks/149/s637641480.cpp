#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int p[10001];

int root(int x){
  vector <int> v;
  while(p[x]!=x){
    v.push_back(x);
    x=p[x];
  }
  for(int i=0;i<v.size();i++)p[v[i]]=x;
  return x;
}

void unite(int x,int y){
  x=root(x);
  y=root(y);
  if(x!=y){
    p[y]=x;
  }
}

bool same(int x,int y){
  x=root(x);
  y=root(y);
  if(x==y)return true;
  else return false;
}

int main(){
  int n,q,com,x,y;
  for(int i=0;i<10001;i++)p[i]=i;
  cin>>n>>q;
  for(int i=0;i<q;i++){
    scanf("%d %d %d",&com,&x,&y);
    if(com==0){
      unite(x,y);
    }else{
      if(same(x,y))printf("%d\n",1);
      else printf("%d\n",0);
    }
  }
  return 0;
}