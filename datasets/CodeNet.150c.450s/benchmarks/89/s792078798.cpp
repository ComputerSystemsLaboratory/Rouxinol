#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

vector<int> primes;

bool isPrime(int p) {
  for (int i = 0; i < primes.size() && i <= sqrt(p); i++) {
    if (p % primes[i] == 0) {
      return false;
    }
  }
  return true;
}

void makePrimes(int n) {
  primes.pb(2);
  for (int i = 3; i < n; i += 2) {
    if (isPrime(i)) {
      primes.pb(i);
    }
  }
}

int main() {
  makePrimes(1000000);
  int a, d, n;
  while (cin >> a >> d >> n, a | d | n) {
    for (int i = 0; i < primes.size(); i++) {
      if (primes[i] == a) {
        n--;
        if (n == 0) {
          cout << primes[i] << el;
          break;
        }
      } else if (primes[i] > a) {
        a += d;
        i--;
      }
    }
  }
}