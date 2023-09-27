#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> VI;

void solve() {
  VI balls;
  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;
    balls.push_back(n);
  }

  int l = 0;
  int r = 0;
  for (int i = 0; i < 10; i++) {
    int n = balls[i];
    if (n > l) {
      l = n;
    } else if (n > r) {
      r = n;
    } else {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    solve();
  }

  return 0;
}