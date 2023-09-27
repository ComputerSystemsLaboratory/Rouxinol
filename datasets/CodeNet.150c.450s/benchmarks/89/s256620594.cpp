#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
#include<queue>
using namespace std;

long long int mod = 1000000007;
vector<bool> isPrime(long long int n){
  vector<bool> prime(n+1, true);
  prime[0] = false;
  prime[1] = false;
  for(long long int i=2; i<=sqrt(n); i++){
    if( !prime[i] ) continue;
    for(long long int j=i*2; j<=n; j+=i){
      prime[j] = false;
    }
  }
  return prime;
}
int main(void) {

  vector<bool> p = isPrime(2000000);
  long long int a, d, n;
  while(cin >> a >> d >> n){
    if( a == 0 ) break;

    while( n != 0 ){
      if( p[ a ] ) n--;
      if( n == 0 ) cout << a << endl;
      a += d;
    }

  }


  return 0;
}