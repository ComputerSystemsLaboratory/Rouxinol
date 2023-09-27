#include <bits/stdc++.h>

using namespace std;

#define int long long
#define rep(i,a,b) for(int i = a; i<b; i++)

const int INF = 1e9+7;

int n;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin>>n;
  int m = sqrt(10+n);
  vector<int> out(n+1,0);
  
  rep(x,1,m+1)
    rep(y,1,m+1)
      rep(z,1,m+1)
        if(x*x + y*y + z*z +x*y+y*z+z*x <= n){
          out[x*x + y*y + z*z +x*y+y*z+z*x]++;
        }
  rep(i,1,n+1)cout<<out[i]<<"\n";

}
