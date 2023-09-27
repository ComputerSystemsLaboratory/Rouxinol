#include<iostream>

using namespace std;

const int INF=0;

const int N_MAX=1<<20;
const int DAT_SIZE=N_MAX*2-1;
int dat[DAT_SIZE],lazy[DAT_SIZE];
int n;

int min(int a,int b){
  return a+b;
}

void init(int size){
  n=1;
  while(n<size){
    n*=2;
  }
}

void lazy_eval(int k){
  dat[k]+=lazy[k];
  if(k<n-1){
    lazy[k*2+1]+=lazy[k];
    lazy[k*2+2]+=lazy[k];
  }
  lazy[k]=0;
}

int rangemin(int a,int b,int k,int l,int r){
  if(r<=a||b<=l)return INF;
  lazy_eval(k);
  if(a<=l&&r<=b){
    return dat[k];
  }else{
    int v1=rangemin(a,b,k*2+1,l,(l+r)/2);
    int v2=rangemin(a,b,k*2+2,(l+r)/2,r);
    return min(v1,v2);
  }
}

int rangeadd(int v,int a,int b,int k,int l,int r){
  if(r<=a||b<=l){
    lazy_eval(k);
    return dat[k];
  }else if(a<=l&&r<=b){
    lazy[k]+=v;
    lazy_eval(k);
    return dat[k];
  }else{
    lazy_eval(k);
    int v1=rangeadd(v,a,b,k*2+1,l,(l+r)/2);
    int v2=rangeadd(v,a,b,k*2+2,(l+r)/2,r);
    return dat[k]=min(v1,v2);
  }
}

void change(int x,int v,int k,int l,int r){
  lazy_eval(k);
  if(k<n-1){
    if(x<(l+r)/2){
      change(x,v,k*2+1,l,(l+r)/2);
    }else{
      change(x,v,k*2+2,(l+r)/2,r);
    }
    lazy_eval(k*2+1);
    lazy_eval(k*2+2);
    dat[k]=min(dat[k*2+1],dat[k*2+2]);
  }else{
    dat[k]=v;
  }
}

int main(){
  int n,q;
  cin>>n>>q;
  init(n);
  while(q--){
    int com,x,y;
    cin>>com>>x>>y;
    if(com){
      cout<<rangemin(x-1,y,0,0,::n)<<endl;
    }else{
      rangeadd(y,x-1,x,0,0,::n);
    }
  }
}