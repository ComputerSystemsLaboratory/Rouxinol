#include <iostream>
#include <cassert>
#include <queue>

#define INF 922337203685477580
typedef long long ll;

using namespace std;


int solve(int i, int to, int target, int*A) {
  if (i >= to || target <= 0) return 0;

  if (A[i] == target) {
    return 1;
  }

  return max(solve(i + 1, to, target - A[i], A), solve(i + 1, to, target, A));
}

int main() {
  int n;
  cin >> n;

  int A[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int m;
    cin >> m;

    if (solve(0, n, m, A)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}