#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull powmod(ull  a,ull b, ull mod) {
  ull res=1;
  for(; b; b >>= 1){
    if(b & 1){
      res = res * a % mod;
    }
    a = a * a % mod;
  }
  return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  ull m, n;
  cin >> m;
  cin >> n;

  ull res;
  res = powmod(m, n, 1000000007);

  cout << res << "\n";
}

