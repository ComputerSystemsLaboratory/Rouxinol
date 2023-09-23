#include <iostream>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;

ll power(ll, ll);
int main(){
  ll n, m;
  cin >> m >> n;

  ll ans = power(m, n);
  cout << ans << endl;

  return 0;
}

ll power(ll m, ll n){
  ll ans=1LL, tmp=m;
  while(n){
    if(n&1){
      ans *= tmp;
      ans %= MOD;
    }
    tmp *= tmp;
    tmp %= MOD;
    n >>= 1;
  }
  return ans;
}

