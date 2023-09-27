#include<iostream>

using namespace std;
int u[10001];
int o[10001];
int root(int s){
  while(o[s]>=0)
    s=o[s];
  return u[s];
}

void merge(int x,int y){
  x=root(x);
  y=root(y);
  if(x==y)return;
  o[x]=y;
}
int main(){
  int n,q;
  cin>>n>>q;
  for(int i=0;i<n;i++){
    u[i]=i;
    o[i]=-1;
  }
  for(int i=0;i<q;i++){
    int com,x,y;
    cin>>com>>x>>y;
    if(com){
      if(root(x)==root(y))
	cout<<1<<endl;
      else
	cout<<0<<endl;
    }else{
merge(x,y);
    }
  }
  return 0;
}