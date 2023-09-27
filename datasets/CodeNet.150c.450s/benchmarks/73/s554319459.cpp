#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
struct data{
  bool isNull;
  ll mini;
  ll sum;
  data(){
    isNull=true;
  }
  data(ll x){
    isNull=false;
    mini=x;
    sum=x;
  }
};

data merge(const data &a,const data &b){
  if(a.isNull)return b;
  if(b.isNull)return a;
  data d;
  d.isNull=false;
  d.mini=min(a.mini,b.mini);
  d.sum=a.sum+b.sum;
  return d;
}

struct segtree{
  int size;
  vector< data > t;
   
  void init(int n=1){
    t.clear();
    size=1;
    while(size<n)size*=2;
    t.resize(size*2);
  }

  void Update(int i,ll value){
    i+=(size-1);
    t[i]=data(value);
    while(i){
      i=(i-1)/2;
      t[i]=merge(t[i*2+1],t[i*2+2]);
    }
  }
  
  
  data Dfs(int a,int b,int k,int l,int r){
    if(b<=l || r<=a)return data();
    if(a<=l && r<=b)return t[k];
    int m=(l+r)/2;
    data lc=Dfs(a,b,k*2+1,l,m);
    data rc=Dfs(a,b,k*2+2,m,r);
    return merge(lc,rc);
  }
  
  ll getMin(int a,int b){
    return Dfs(a,b,0,0,size).mini;
  }
  ll getSum(int a,int b){
    return Dfs(a,b,0,0,size).sum;
  }
};

segtree T;
 
int main(){

   
  int n,q;
  scanf("%d %d",&n,&q);
  T.init(n);
  for(int i=0;i<n;i++){
    T.Update(i,0);
  }
  
  while(q--){
    int type,a,b;
    scanf("%d %d %d",&type,&a,&b);
    if(type==0){
      a--;
      ll x=T.getSum(a,a+1) + b;
      T.Update(a,x);
    }else{
      a--;
      b--;
      printf("%lld\n", T.getSum(a,b+1) );
    }
  }
  return 0;
}


