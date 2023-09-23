#include<bits/stdc++.h>
using namespace std;

template< typename T >
T mod_pow(T x, T n, const T &p) {
  T ret = 1;
  while(n > 0) {
    if(n & 1) (ret *= x) %= p;
    (x *= x) %= p;
    n >>= 1;
  }
  return ret;
}

int main(){
  long long m,n;
  cin>>m>>n;
  cout<<mod_pow(m,n,(long long)1000000007)<<'\n';
}
