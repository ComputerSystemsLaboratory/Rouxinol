#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


vector<ll> getPrimes(ll size) {
  bool isPrime[size];
  for (ll i = 0; i < size; i++) isPrime[i] = true;
  for (ll i = 2; i < size; i++) {
    if (isPrime[i]) {
      for (ll j = 2; j * i < size; j++) {
        isPrime[i * j] = false;
      }
    }
  }
  vector<ll> primes;
  for (ll i = 2; i < size; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
  return primes;
}

vector<ll> factorize(ll n, vector<ll> &primes) {
  vector<ll> factors;
  for (ll prime : primes) {
    while (n % prime == 0) {
      n /= prime;
      factors.push_back(prime);
    }
    if (n == 1) {
      break;
    }
    if (prime * prime > n) {
      factors.push_back(n);
      break;
    }
  }
  return factors;
}

int main() {
  ll n; cin >> n;
  vector<ll> primes = getPrimes((ll)sqrt(n + 2) * 2);
  cout << n << ':'; for (ll i : factorize(n, primes)) cout << ' ' << i;
  cout << endl;
}