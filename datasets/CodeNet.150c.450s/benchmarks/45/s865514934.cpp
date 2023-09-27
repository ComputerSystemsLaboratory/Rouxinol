#include <bits/stdc++.h>
#include<algorithm>
#define int long long
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
static const double pi = 3.141592653589793;
#define MOD 1000000007
#define INF 10000000000000


signed main(){
  int ans=1;
  int n,m;
  cin>>m>>n;
  while(n>0){
    if(n&1) ans=m*ans%MOD;
    m=m*m%MOD;
    n>>=1;
  }
  cout<<ans<<endl;
}

