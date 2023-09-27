#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>

const int MAX_N=1<<17;

using namespace std;

int n,dat[2*MAX_N];

void init(int n_){
  n=1;
  while(n<n_)n*=2;
}

void add(int k,int a){
  k+=n-1;
  dat[k]+=a;

  while(k>0){
    k=(k-1)/2;
    dat[k]=dat[2*k+1]+dat[2*k+2];
  }
}

int query(int a,int b,int k,int l,int r){
  if(r<=a || b<=l)return 0;
  if(a<=l && r<=b)return dat[k];

  int vl=query(a,b,k*2+1,l,(l+r)/2);
  int vr=query(a,b,k*2+2,(l+r)/2,r);
  return vl+vr;
}

int main(void){

  int m,q,a,b,com;

  cin >> m >> q;

  init(m);
  while(q--){
    cin >> com >> a >> b;
    if(com)cout << query(a-1,b,0,0,n) << endl;
    else add(a-1,b);

  }
  return 0;
}