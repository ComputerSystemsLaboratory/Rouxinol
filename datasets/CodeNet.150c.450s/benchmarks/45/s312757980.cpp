#include <iostream>

using namespace std;
using llong = long long;
constexpr llong p = 1000000007;

llong power_mod(llong m,llong n){
  llong pm = 1;
  llong mult=m;
  while(n!=0){
    if(n&1)
      pm = (pm*mult)%p;
    n >>= 1;
    mult = (mult*mult)%p;
  }
  return pm;
}

int main(){
  llong m,n;
  cin >> m >> n;
  cout << power_mod(m,n) << endl;
  return 0;
}