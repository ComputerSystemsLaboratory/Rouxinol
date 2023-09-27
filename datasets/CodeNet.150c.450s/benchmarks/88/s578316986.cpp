#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)

bool f(ll h0,ll w0,ll h1,ll w1){
  if(h0*h0+w0*w0==h1*h1+w1*w1)return h0 < h1;
  else return h0*h0+w0*w0 < h1*h1+w1*w1;
}

int main(){
  while(1){
    ll h,w;
    cin>>h>>w;
    if(h==0)break;
    ll ch=200,cw=200;
    repl(i,1,201)repl(j,i+1,201){
      if(f(h,w,i,j)&&f(i,j,ch,cw)){
        ch=i; cw=j;
      }
    }
    cout<<ch<<" "<<cw<<endl;
  }
  return 0;
}

