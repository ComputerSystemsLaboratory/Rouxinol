#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#define rep(X,Y) for(int (X)=0;(X)<(Y);++(X))

typedef long long ll;

using namespace std;

int main(){
  ll n,b,c,a,x;
  while(cin>>n>>a>>b>>c>>x){
    if(!n)break;
    int cnt=0,ub=10000;
    vector<ll> yy(n);
    rep(i,n)cin>>yy[i];
    rep(i,n){
      ll y=yy[i];
      while(x!=y){
	x=(a*x%c+b)%c;
	if(++cnt>ub){cnt=-1;break;}
      }
      if(cnt<0)break;
      if(i!=n-1){x=(a*x%c+b)%c; ++cnt;}
    }
    cout<<cnt<<endl;
  }
}