#include <iostream>
using namespace std;
  
typedef long long ll;
ll m, n;
  
#define MOD 1000000007
  
ll mod_power(ll x, ll n, ll mod) {
  ll res = 1;
  while(n > 0) {
    if(n & 1) res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}
  
int main() {
  cin >> m >> n;
  cout << mod_power(m, n, MOD) << endl;
  return 0;
}