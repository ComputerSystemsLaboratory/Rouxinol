#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> VI;

bool dfs(const VI &balls, int idx, int l, int r) {
  if (idx >= 10) return true;
  int n = balls[idx];
  if (n > l && dfs(balls, idx+1, n, r)) return true;
  if (n > r && dfs(balls, idx+1, l, n)) return true;
  return false;
}

void solve() {
  VI balls;
  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;
    balls.push_back(n);
  }
  if (dfs(balls, 0, 0, 0)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    solve();
  }

  return 0;
}