#include <iostream>
#define MAX_N 100
#define MAX_M 100
using namespace std;

int n, m, t_sum, h_sum;
int t[MAX_N], h[MAX_M];

void solve() {
  int sum = 200;
  int t_ans, h_ans;

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      if(t_sum - t[i] + h[j] == h_sum - h[j] + t[i] && t[i] + h[j] < sum) {
        t_ans = t[i];
        h_ans = h[j];
        sum = t[i] + h[j];
      }
    }
  }
  if(sum == 200) cout << -1 << endl;
  else cout << t_ans << ' ' << h_ans << endl;
}

int main() {
  while(cin >> n >> m && n && m) {
    t_sum = 0, h_sum = 0;
    for(int i = 0; i < n; ++i) {
      cin >> t[i];
      t_sum += t[i];
    }
    for(int i = 0; i < m; ++i) {
      cin >> h[i];
      h_sum += h[i];
    }
    solve();
  }
  return 0;
}

