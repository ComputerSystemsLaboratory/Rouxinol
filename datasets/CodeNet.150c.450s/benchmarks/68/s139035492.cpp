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
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265

void f(int n){
  int a[1000000];

  rep(i,n){
    cin>>a[i];
  }

  sort(a,a+n);
  int ans = inf;
  rep(i,n-1){
    ans = min(ans,abs(a[i]-a[i+1]));
  }

  cout<<ans<<endl;
}


int main(){
  
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    f(n);
  }

  return 0;
}

