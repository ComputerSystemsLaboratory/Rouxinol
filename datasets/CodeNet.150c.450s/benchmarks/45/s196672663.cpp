#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

int main(){
  ll m,n;
  cin>>m>>n;
  
  ll ans=1,x=m;
  while(n>0){
    if(n&1) ans=ans*x%MOD;
    x=x*x%MOD;
    n/=2;
  }
  cout<<ans<<endl;
 
  return 0;
}
