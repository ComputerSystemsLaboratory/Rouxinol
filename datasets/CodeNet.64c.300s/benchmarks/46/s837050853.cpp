#include <bits/stdc++.h>
using namespace std;

int main()
{
  bool prime[1048576];
  memset(prime, true, sizeof(prime));

  prime[0] = prime[1] = false;
  for (int i = 0; i < 1024; ++i){
    if (prime[i]){
      for (int j = i * 2; j <= (1 << 20); j += i){
        prime[j] = false;
      }
    }
  }

  int a, d, n;
  while (cin >> a >> d >> n, n){
    int cnt = 0;
    for (int i = 0; ; i++){
      int k = a + (d * i);
      if (prime[k]) cnt++;
      if (cnt == n){
        cout << k << endl;
        break;
      }
    }
  }
}