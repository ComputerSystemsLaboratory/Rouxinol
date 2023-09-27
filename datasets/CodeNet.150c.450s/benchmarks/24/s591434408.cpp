#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
#define INF 1000000000000000
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define RFOR(i,m,n) for(int i=(int)m;i>=(int)n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
#define IN(a,n) rep(i,n){ cin>>a[i]; }
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265
#define F first
#define S second
#define int ll


void f(int n,int m){
  vector<P> v(n);
  int sum=0;
  rep(i,n){
    int a,b;
    cin>>a>>b;
    v.push_back(P(b,a));
    sum+=a*b;
  }
  sort(all(v));
  reverse(all(v));
  rep(i,n){
    sum-=v[i].F*min(v[i].S,m);
    m-=v[i].S;
    if(m<0) break;
  }

  cout<<sum<<endl;
}





signed main(){
  int n,m;
  while(1){
    cin>>n>>m;
    if(!n) break;
    f(n,m);
  }
}
