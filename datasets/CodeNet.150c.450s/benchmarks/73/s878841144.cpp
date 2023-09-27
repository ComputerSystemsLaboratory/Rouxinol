#include<bits/stdc++.h>
using namespace std;
#define MAX_N 1<<17
int n,dat[2*(MAX_N)-1];

//INT＿MAXで初期化
void init(int n_){
  n=1;
  while(n<n_)n*=2;
  for(int i=0;i<2*n-1;i++)dat[i]=0;
}

//k番目の要素をaに変更
void update(int k,int a){
  k+=n-1;
  dat[k]+=a;
  while(k>0){
    k=(k-1)/2;
    dat[k]=dat[k*2+1]+dat[k*2+2];
  }
}

//[a,b)の合計を求める
int query(int a,int b,int k=0,int l=0,int r=n){
  if(r<=a||b<=l)return 0;
  if(a<=l&&r<=b)return dat[k];
  else{
    int vl=query(a,b,k*2+1,l,(l+r)/2);
    int vr=query(a,b,k*2+2,(l+r)/2,r);
    return vl+vr;
  }
}

int main(){
  int q;
  cin>>n>>q;
  init(n);
  for(int i=0;i<q;i++){
    int com,x,y;
    cin>>com>>x>>y; //com=1でfind,elseでupdate
    if(com)cout<<query(x-1,y)<<endl;
    else update(x-1,y);
  }
  return 0;
}

