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


void search(int n,int m){
  int h[2000],w[2000];

  rep(i,n){
    cin>>h[i];
  }
  rep(i,m){
    cin>>w[i];
  }

  map<int,int> a,b;

  rep(i,n){
    int sum=0;
    FOR(j,i,n){
      sum+=h[j];
      a[sum]++;
    }
  }
  rep(i,m){
    int sum=0;
    FOR(j,i,m){
      sum+=w[j];
      b[sum]++;
    }
  }

  int ans=0;

  for(auto itr=a.begin();itr!=a.end();itr++){
    ans += itr->second*b[itr->first];
  }

  cout<<ans<<endl;

}




int main(){
  int n,m;

  while(1){
    cin>>n>>m;
    if(n==0) break;

    search(n,m);
  }

  return 0;
}

