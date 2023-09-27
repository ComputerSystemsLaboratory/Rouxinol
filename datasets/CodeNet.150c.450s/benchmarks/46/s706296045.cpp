#include <iostream>
using namespace std;
int calc(int cur, int n, int count, int sum, int goal) {
  if (cur > n) {
    return 0;
  }
  if (count >= 3) {
    return 0;
  }
  if (goal-sum < cur) {
    return 0;
  }
  if (goal-sum == cur) {
    if (count == 2) {
      return 1;
    } else {
      return 0;
    }
  }

  return calc(cur+1, n, count+1, sum+cur, goal) + calc(cur+1, n, count, sum, goal);
}

int main() {
  int n, x;
  bool loop = true;
  while (loop) {
    cin >> n >> x;
    if ((n == 0) && (x == 0)) {
      loop = false;
    } else {
      cout << calc(1, n, 0, 0, x) << endl;
    }
  }
  return 0;
}