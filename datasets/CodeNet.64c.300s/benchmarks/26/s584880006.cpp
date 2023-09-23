#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;

int modpow(int m, int n){
  if(n == 0) return 1;
  else if(n%2 == 0) return modpow(m*m%mod, n/2);
  else{
    return modpow(m, n - 1)*m%mod;
  }
}

signed main(){
  int m, n; cin >> m >> n;
  cout << modpow(m, n)%mod << endl;
}
