#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359

bool is_prime(int n) {
  if(n == 1) return false;
  bool flag = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      flag = false;
  }
  return flag;
}

int main(void) {
  vector<int> ans;

  while (true) {
    int a, d, n;
    cin >> a >> d >> n;
    if (a == 0 && d == 0 && n == 0)
      break;
    int pcount = 0, count = 0;
    while (pcount < n) {
      if (is_prime(a + count * d))
        pcount++;
      count++;
    }

    ans.push_back(a + (count - 1) * d);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }

  return 0;
}