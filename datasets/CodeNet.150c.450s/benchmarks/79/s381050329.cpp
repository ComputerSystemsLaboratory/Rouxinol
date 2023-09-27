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


void f(int n,int r){
  int a[100];
  rep(i,n){
    a[i+1]=n-i;
  }

  rep(i,r){
    int p,c;
    cin>>p>>c;
    int b[100];
    rep(j,p-1){
      b[j]=a[j+1];
    }
    rep(j,c){
      a[j+1]=a[p+j];
    }
    rep(j,p-1){
      a[j+c+1]=b[j];
    }
  
    
  }

  cout<<a[1]<<endl;

}

int main(){
  while(1){
    int n,r;
    cin>>n>>r;
    if(n==0) break;
    f(n,r);
  }

  return 0;
}
