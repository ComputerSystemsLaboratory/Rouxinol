#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
typedef long long i64;


template<i64 N> struct prime_numbers{
  set<i64> primes;
  bool p[N+1];
  
  constexpr prime_numbers<N>() : primes(), p() {
    p[0] = p[1] = true;
    for(i64 i=2; i<=N; i++) {
      if(p[i]) continue;
      if(i*i<=N) {
        for(i64 j=i; i*j<=N; j++) {
          p[i*j] = true;
        }
      }
      primes.insert(i);
    }
  }
  
  bool is_prime(i64 n) {
    return primes.find(n) != primes.end();
  }
};


int main(){
  i64 n;
  prime_numbers<1000000LL> ps;
  while(cin >> n) {
    int res = 0;
    for(int i=1; i<=n; i++) if(ps.is_prime(i)) res++;
    cout << res << endl;
  }
  
}

