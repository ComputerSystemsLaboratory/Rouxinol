#include <cstdio>
#include <vector>
#include <queue>

int testcase_ends() {
  size_t N;
  int A, B, C, X;
  scanf("%zu %d %d %d %d", &N, &A, &B, &C, &X);
  if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0) return 1;

  std::queue<int> q;
  for (size_t i = 0; i < N; ++i) {
    int y;
    scanf("%d", &y);
    q.push(y);
  }
  for (int i = 0; i <= 10000; ++i) {
    if (q.front() == X) {
      q.pop();
      if (q.empty()) return !printf("%d\n", i);
    }
    X = (A * X + B) % C;
  }
  puts("-1");
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

