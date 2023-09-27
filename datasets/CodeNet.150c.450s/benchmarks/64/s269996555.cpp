// Code using recursion.

#include <stdio.h>
#include <vector>

using namespace std;

// TODO: replace with DP
class Solver {
 public:
  Solver(const int* A, size_t n, int max)
      : A_(A), n_(n), max_(max) {
    memo_.resize(20);
    for (size_t i = 0; i < 20; ++i) {
      memo_[i].resize(max_);
    }
  }

  int solve(size_t i, int m) {
    if (m == 0) return 1;
    if (i >= n_ || m < 0 || m > max_) return 0;
    if (memo_[i][m]) return 1;

    const int res = solve(i + 1, m) || solve(i + 1, m - A_[i]);
    if (res) {
      memo_[i][m] = 1;
    }
    return res;
  }

 private:
  const int* A_;
  size_t n_;
  int max_;

  vector<vector<int> > memo_;
};

int main() {
  size_t n;
  int A[20];

  scanf("%lu", &n);
  int max = 0;
  for (size_t i = 0; i < n; ++i) {
    scanf("%d", &A[i]);
    max += A[i];
  }

  Solver solver(A, n, max);

  int q;
  scanf("%d", &q);
  int m = 0;
  for (int i = 0; i < q; ++i) {
    scanf("%d", &m);
    if (solver.solve(0, m)) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}