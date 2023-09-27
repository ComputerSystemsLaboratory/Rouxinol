#include <iostream>
#include <algorithm>

using namespace std;

bool is_prime[1000002];

void Sieve() {
  fill(is_prime, is_prime+1000001, true);
  is_prime[0] = is_prime[1] = false;
  
  for(long long i=2; i<=1000000; i++) {
    if(is_prime[i]) {
      for(long long j=i*i; j<=1000000; j+=i)
	is_prime[j] = false;
    }
  }
}

int main() {
  int a, d, n;
  
  Sieve();
  
  while(cin >> a >> d >> n && (a|d|n)) {
    int cnt = 0;
    for(int i=a; i<=1000000; i+=d) {
      if(is_prime[i]) cnt ++;
      if(cnt == n) {
	cout << i << endl;
	break;
      }
    }
  }
  
  return 0;
}