#include <iostream>
#include <vector>

using namespace std;

#define N_MAX 1000000
bool primes[N_MAX];

void sieve() {
  for (int i = 0; i < N_MAX; ++i)
    primes[i] = true;

  primes[0] = false; primes[1] = false;
  for (int i = 2; i < N_MAX; ++i) {
    if (!primes[i])
      continue;
    for (int j = i * 2; j < N_MAX; j += i) {
      primes[j] = false;
    }
  }
}

int main(int argc, char const* argv[])
{
  sieve();

  while (true) {
    int a, d, n;
    cin >> a >> d >> n;
    if (!(a || d || n)) break;

    int n_primes = 0;
    for (int i = a; ; i += d) {
      if (primes[i]) {
        ++n_primes;
        if (n == n_primes) {
          cout << i << endl;
          break;
        }
      }
    }
  }
  return 0;
}