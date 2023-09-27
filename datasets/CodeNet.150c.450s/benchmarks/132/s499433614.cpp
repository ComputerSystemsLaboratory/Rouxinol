#include <iostream>
#include <vector>

using namespace std;

void solve(int n, int p) {
  int c = p;
  vector<int> stones(n);
  
  int t = 0;
  while (true) {
    if (c > 0) {
      c--;
      stones[t]++;
      if (c == 0 && stones[t] == p) {
        cout << t << endl;
        return;
      }
    } else {
      c = stones[t];
      stones[t] = 0;
    }
    t = (t + 1) % n;
  }
}

int main() {
  int n, p;
  while (true) {
    cin >> n >> p;
    if (n + p == 0) break;
    solve(n, p);
  }
  return 0;
}