#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char prime[1000000];

  memset(prime, 1, sizeof(prime));
  prime[0] = prime[1] = 0;
  for (int i = 2; i < 1000; i++) {
    if (prime[i])
      for (int j = i * 2; j < 1000000; j += i)
        prime[j] = 0;
  }

  int a, d, n;
  while (cin >> a >> d >> n && (a||d||n)) {
    int ct = 0;
    while (a < 1000000) {
      if (prime[a]) 
        if (++ct == n)
          break;
      a += d;
    }
    cout << a << endl;
  }
}