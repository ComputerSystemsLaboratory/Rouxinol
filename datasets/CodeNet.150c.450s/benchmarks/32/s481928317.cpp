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
#define rrep(i,n) FOR(i,n,0)
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265


int m,nmin,nmax;
int p[1000000];

void search(int m,int nmin,int nmax){
  int p[100000];

  rep(i,m){
    cin>>p[i];
  }

  int n=nmin,pm=p[nmin-1]-p[nmin];

  FOR(i,nmin,nmax+1){
    if(pm<=p[i-1]-p[i]){
      pm = p[i-1]-p[i];
      n = i;
    }
  }

  cout<<n<<endl;

}


int main(){

  int m,nmin,nmax;
  while(1){
    cin>>m>>nmin>>nmax;
    if(m==0) break;
    search(m,nmin,nmax);
  }


  return 0;
}


