#include <bits/stdc++.h>

using namespace std;

class Prime {
private:
  vector<long long> divisor;
  
public:
  Prime(long long n) {
    for (long long i = 0; i < n; ++i) divisor.emplace_back(i);
    for (long long i = 2; i <= n / i; ++i) if (divisor[i] == i) {
      for (long long j = i * i; j < n; j += i) divisor[j] = i;
    }
  }
  
  bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n < (long long)divisor.size()) return divisor[n] == n;
    for (long long i = 2; i <= n / i; ++i) if (n % i == 0) return false;
    return true;
  }
  
  vector<long long> factor(long long n) {
    vector<long long> res;
    for (long long i = 2; i <= n / i && n >= (long long) divisor.size(); ++i) {
      while (n % i == 0) {
        res.emplace_back(i);
        n /= i;
      }
    }
    if (n >= (long long)divisor.size()) {
      res.emplace_back(n);
    } else {
      while (n > 1) {
        res.emplace_back(divisor[n]);
        n /= divisor[n];
      }
    }
    sort(res.begin(), res.end());
    return res;
  }
  
  vector<long long> divisors(long long n) {
    vector<long long> res;
    for (long long i = 2; i <= n / i && n >= (long long) divisor.size(); ++i) {
      if (n % i) continue;
      res.emplace_back(i);
      while (n % i == 0) n /= i;
    }
    if (n >= (long long)divisor.size()) {
      res.emplace_back(n);
    } else {
      while (n > 1) {
        long long d = divisor[n];
        res.emplace_back(d);
        while (n % d == 0) n /= d;
      }
    }
    sort(res.begin(), res.end());
    return res;
  }
};

int main() {
  Prime prime(1000000);
  array<int, 1000000> sum;
  sum[0] = 0;
  for (int i = 1; i < 1000000; ++i) sum[i] = sum[i - 1] + prime.isPrime(i);
  int n;
  while (cin >> n) cout << sum[n] << endl;
}