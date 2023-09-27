#include <bits/stdc++.h>
using namespace std;

int v,e;
set<pair<int,pair<int,int>>> g;

int a[10005]={};

void init(){
  for(int i=0;i<10005;i++)a[i]=i;
}

int find(int x){
  if(a[x]==x)return x;
  else return (a[x]=find(a[x]));
}

void un(int x,int y){
  a[find(x)]=y;
}

int main() {
  long long c=0;
  init();
  cin>>v>>e;
  for(int i=0;i<e;i++){
    int a,b,l;cin>>a>>b>>l;
    g.insert({l,{a,b}});
  }
  for(auto p:g){
    if(find(p.second.first)!=find(p.second.second)){
      c+=p.first;
      un(p.second.first,p.second.second);
    }
  }
  cout<<c<<endl;
}