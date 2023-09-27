#include <bits/stdc++.h>

using namespace std;

#define int long long
#define rep(i,a,n) for(int i = a; i<n; i++)
#define per(i,a,n) for(int i = n-1; i>=a; i--)

int max(int a,int b){return a>b ? a:b;}
int min(int a,int b){return a<b ? a:b;}


const int INF = 1e9+7;

int n;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin>>n;
  int m = sqrt(10+n);
  vector<int> out(n+1,0);
  int ctr = 0;
  rep(x,1,m+1)
    rep(y,1,m+1)
      rep(z,1,m+1)
        if(x*x + y*y + z*z +x*y+y*z+z*x <= n){
          out[x*x + y*y + z*z +x*y+y*z+z*x]++;
        }
  rep(i,1,n+1)cout<<out[i]<<"\n";




}
