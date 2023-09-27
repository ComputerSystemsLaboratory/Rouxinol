#include<iostream>
using namespace std;
typedef long long int lli;
int mod = 1e9 + 7;

lli modPow(lli x, lli n){
  if(n == 0)return 1LL;
  lli res = modPow((x*x)%mod, n/2);
  if(n&1)res = (res*x)%mod;
  return res;
}

int main(){
  lli n, m;
  std::cin >> m >> n;

  std::cout << modPow(m, n) << std::endl;
  return 0;
}