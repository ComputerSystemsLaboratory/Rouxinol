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

int c[300];
vector<int> d;
int a[10000000],b[10000000];

void f(int n){
  fill(a,a+1000000,inf);
  fill(b,b+1000000,inf);
  a[0]=b[0]=0;
  rep(i,1000000){
    FOR(j,1,300){
      if(i+c[j]>=1000000)break;
      a[i+c[j]]=min(a[i+c[j]],a[i]+1);
    }
  }
  rep(i,1000000){
    FOR(j,1,d.size()){
      if(i+d[j]>=1000000)break;
      b[i+d[j]]=min(b[i+d[j]],b[i]+1);
    }
  }




}

void g(int n){
  cout<<a[n]<<' '<<b[n]<<endl;
}


int main(){
  d.push_back(0);
  for(int i=1;i<200;i++){
    c[i] = (i*(i+1)*(i+2))/6;
  
   if(c[i]%2){
     d.push_back(c[i]);
   }
  }

  f(1000000);

  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    g(n);
  }

  return 0;
}
