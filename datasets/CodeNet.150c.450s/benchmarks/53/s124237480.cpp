#include <cassert>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <limits.h>
#include <map>
#include <queue>
#include <string.h>
#include <vector>

using namespace std;
typedef long long ll;

class Prime {
public:
  vector<ll> prime_list;
  const ll MAX_N = 100000;

  Prime() {
    bool checked[MAX_N + 1];
    memset(checked, false, sizeof(checked));

    for (ll i = 2; i <= MAX_N; ++i) {
      if (!checked[i]) {
        prime_list.push_back(i);

        for (ll j = 2 * i; j <= MAX_N; j += i) {
          checked[j] = true;
        }
      }
    }
  }

  map<ll, int> prime_division(ll n) {
    map<ll, int> res;

    for (ll i = 0; prime_list[i] <= sqrt(n); ++i) {
      ll p = prime_list[i];

      while (n % p == 0) {
        ++res[p];
        n /= p;
      }
    }

    if (n != 1) {
      res[n] = 1;
    }

    return res;
  }

  bool is_prime(ll n) {
    if (n <= 1) return false;

    for (int i = 0; i < prime_list.size(); ++i) {
      if (n % prime_list[i]) return false;
    }

    return true;
  }
};

int main() {
  int N;
  cin >> N;

  Prime prime;

  map<ll, int> res = prime.prime_division(N);
  vector<int> ans;

  for (map<ll, int>::iterator it = res.begin(); it != res.end(); ++it) {
    for (int i = 0; i < it->second; ++i) {
      ans.push_back(it->first);
    }
  }

  cout << N << ": ";
  for (int i = 0; i < ans.size(); ++i) {
    cout << ans[i];

    if (i == ans.size() - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }

  return 0;
}

