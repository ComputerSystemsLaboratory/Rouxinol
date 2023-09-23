#include <climits>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  int n; cin >> n;
  int min_v = INT_MAX, max_v = INT_MIN;
  long long sum_v = 0;
  for (int i = 0; i < n; i++) {
    int v; cin >> v;
    min_v = min(min_v, v);
    max_v = max(max_v, v);
    sum_v += v;
  }
  cout << min_v << ' ' << max_v << ' ' << sum_v << endl;
  return 0;
}