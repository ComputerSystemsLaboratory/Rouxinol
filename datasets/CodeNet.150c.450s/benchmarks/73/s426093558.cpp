#include<iostream>
#include<algorithm>
#include <stdio.h>
using namespace std;
#define TREE_N (1<<17)

int ans,n,tree[ TREE_N * 2 -1];

void update(int i,int x){
  i+=TREE_N-1;
  tree[i]+=x;
  while(i>0){
    i=(i-1)/2;
    tree[i]=tree[i*2+1]+tree[i*2+2];
  }
}

void rec(int a,int b,int k=0,int l=0,int r=TREE_N){
  if((l<a&&a<r)||(l<b&&b<r)){
    int m=(l+r)/2;
    rec(a,b,k*2+1,l,m);
    rec(a,b,k*2+2,m,r);
  }else if(a<=l&&r<=b){
    ans+=tree[k];
  }
}

int Rec(int a,int b,int k=0,int l=0,int r=TREE_N){
  if((l<a&&a<r)||(l<b&&b<r)){
    int m=(l+r)/2;
    int left = Rec(a,b,k*2+1,l,m);
    int right = Rec(a,b,k*2+2,m,r);
    return min(left,right);
    
  }else if(a<=l&&r<=b){
    return tree[k];
  }else{
    return 2147483647;
  }
}

int main(){
  int q,com,a,b;
  cin>>n>>q;
  for(int i=1;i<=n;i++)update(i,0);
  for(int i=0;i<q;i++){
    cin>>com>>a>>b;
    if(com){
      ans=0;
      rec(a,b+1);
      printf("%d\n",ans);
    }
    else update(a,b);
  }
  return 0;
}