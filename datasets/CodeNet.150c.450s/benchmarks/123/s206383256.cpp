#include <bits/stdc++.h>

bool isprime[10000];

int main(void) {

  for(int i = 0; i < 10000; ++i) {
    isprime[i] = true;
  }
  isprime[0] = isprime[1] = false;

  for(int i = 2; i < 100; ++i) {
    if( isprime[i] ) {
      for(int j = i + i; j < 10000; j+=i) {
        isprime[j] = false;
      }
    }
  }

  int N;
  int A;
  int ans = 0;

  std::cin >> N;
  ans = N;
  for(int i = 0; i < N; ++i) {
    std::cin >> A;
    int n = std::min(10000, A);
    for(int j = 2; j < n; ++j) {
      if( isprime[j] ) {
        if( A % j == 0 ) {
          ans -= 1;
          break;
        }
      }
    }
  }

  std::cout << ans << std::endl;

  return 0;
}