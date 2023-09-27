#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;
typedef long long int ll;
ll y[12];

int main(){ _;
  ll n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,(n|a|b|c|x)!=0){
    REP(i,n)cin>>y[i];
    ll idx=0,i=0;
    ll curX=x;
    for(;i<=10000;i++){
      if(curX==y[idx]) idx++;
      if(idx==n) break;
      curX=(a*curX+b)%c;
    }
    cout<<(idx==n?i:-1)<<endl;
  }
}