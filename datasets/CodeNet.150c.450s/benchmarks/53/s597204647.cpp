#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <mutex>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <thread>
#include <vector>
#define int long long
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define SQR(x) (x) * (x)
#define itn int

using namespace std;
const int MOD = (int)(1e9 + 7);
const int INF = (int)(1e13 + 7);

vector<int> prime_factor;
void prime_factorization(int n) {
  while (n % 2 == 0) {
    n /= 2;
    prime_factor.push_back(2);
  }
  for (int i = 3; i < (int)(sqrt((double)n)) + 2; i += 2) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
        prime_factor.push_back(i);
      }
    }
  }
  if (n != 1) {
    prime_factor.push_back(n);
  }
}

signed main() {
  int n;
  cin >> n;
  prime_factorization(n);
  cout << n << ":"
       << " ";
  for (int i = 0; i < prime_factor.size() - 1; i++) {
    cout << prime_factor[i] << " ";
  }
  cout << prime_factor[prime_factor.size() - 1] << endl;
}

