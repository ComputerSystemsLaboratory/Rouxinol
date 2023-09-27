#include <iostream>
using namespace std;

const int MAX = 100005;
long long cum_sum[MAX];

int main() {
  // input
  while (true) {
    int n, k, tmp;
    cin >> n >> k;
    if (n == 0 && k == 0) break;
    for (int i = 1; i <= n; i++) {
      cin >> tmp;
      cum_sum[i] = cum_sum[i-1] + tmp;
    }

    long long ans {-MAX * n};
    for (int i = 1; i <= n-k; i++) {
      long long tmp_ans = cum_sum[i + k] - cum_sum[i];
      if (ans < tmp_ans) ans = tmp_ans;
    }
    cout << ans << endl;
  }
}

