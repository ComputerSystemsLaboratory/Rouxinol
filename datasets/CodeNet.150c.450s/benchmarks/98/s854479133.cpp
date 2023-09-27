#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define RFOR(i,m,n) for(int i=m;i>=n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265

void f(int n,int m){
  int a[100],b[100];
  int suma=0,sumb=0;
  rep(i,n){
    cin>>a[i];
    suma+=a[i];
  }
  rep(i,m){
    cin>>b[i];
    sumb+=b[i];
  }
  sort(a,a+n);
  sort(b,b+m);

  rep(i,n){
    rep(j,m){
      if(suma-a[i]+b[j]==sumb-b[j]+a[i]){
        cout<<a[i]<<' '<<b[j]<<endl;
        return;
      }
    }
  }

  cout<<-1<<endl;
}


int main(){
  while(1){
    int n,m;
    cin>>n>>m;
    if(n==0) break;
    f(n,m);
  }

  return 0;
}
