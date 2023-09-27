#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<(int)(n);i++)
#define FORR(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define pb(a) push_back(a)
#define mp(x,y) make_pair(x,y)
#define ALL(a) a.begin(),a.end()
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,-1,sizeof(a))
#define len(a) sizeof(a)
#define ll long long
#define pii pair<int,int>
#define INF 1<<29
#define MAX 101010
using namespace std;

int n,k,a[MAX],sum[MAX];

void solve(){
 for(;;){
  cin>>n>>k;
  if(!n) break;
  FOR(i,n) cin>>a[i];
  FOR(i,n) sum[i+1]=sum[i]+a[i];
  int ma=0;
  FOR(i,n-k) ma=max(ma,sum[i+k]-sum[i]);
  cout<<ma<<endl;
 }
}

int main(){
 solve();
 return 0;
}