#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
typedef long long llong;
typedef unsigned long long ullong;

llong mod_pow(ullong x, ullong n, ullong mod){
  ullong res = 1;
  while(n > 0){
    if(n & 1)
      res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}

int main(void){
  ullong m, n;
  cin >> m >> n;
  cout << mod_pow(m, n, 1000000007) << endl;

  return 0;
}