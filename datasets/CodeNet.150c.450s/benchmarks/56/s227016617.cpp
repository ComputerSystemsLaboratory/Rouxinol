#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int64_t> a(n);
  for (int i = 0; i < n; i++) scanf("%lld" , &a.at(i));
  int64_t max_a, min_a, sum_a;
  max_a = -10000000; min_a = 10000000; sum_a = 0;
  for (int i = 0; i < n; i++) {
    if (max_a < a.at(i)) max_a = a.at(i);
    if (min_a > a.at(i)) min_a = a.at(i);
    sum_a += a.at(i);
  }
  cout << min_a << " " << max_a << " " << sum_a << endl;
}
