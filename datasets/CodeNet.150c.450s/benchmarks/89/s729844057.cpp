#include <bits/stdc++.h>
using namespace std;

signed main()
{
  bool prime[1000005];

  fill_n(prime, 1000005, true);
  prime[1] = false;
  for(int i = 2; i * i <= 1000005; i++) {
    if(prime[i]) {
      for(int j = i * i; j <= 1000005; j += i) prime[j] = false;
    }
  }

  int A, D, N;
  
  while(cin >> A >> D >> N, A || D || N) {
    int cnt = 0;
    while(cnt < N) {
      cnt += prime[A];
      A += D;
    }
    cout << A - D << endl;
  }

  return 0;
}