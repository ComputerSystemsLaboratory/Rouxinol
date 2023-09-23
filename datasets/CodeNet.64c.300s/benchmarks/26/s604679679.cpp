#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
long long int powmod(long long int a, long long int b, long long int p){
  if( b == 0 ) return 1;
  if( b%2 == 0 ){
    long long int d = powmod(a, b/2, p);
    return ((d%p) * (d%p)) % p;
  }
  return ( (a%p) * (powmod(a, b-1, p)%p) ) % p;
}
int main(void) {
  int m, n;
  cin >> m >> n;
  cout << powmod(m, n, 1000000007) << endl;

  return 0;
}





// EOF