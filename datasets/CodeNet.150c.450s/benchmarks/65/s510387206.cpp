#include <algorithm>
#include <cstdio>
#include <string>

static const size_t N_MAX = 36;

bool cmp(const std::string& a, const std::string& b) {
  return a[1] < b[1];
}

int main() {
  size_t N;
  std::string A[N_MAX], B[N_MAX];
  scanf("%zu", &N);
  for (size_t i = 0; i < N; i++) {
    char c[3];
    scanf("%s", c);
    A[i] = c;
  }
  std::copy(A, A + N, B);
  std::stable_sort(B, B + N, cmp);
  for (size_t i = 0; i < N - 1; i++) {
    auto m = std::min_element(A + i, A + N, cmp);
    if (A[i] != *m)
      std::swap(A[i], *m);
  }
  for (size_t i = 0; i < N - 1; i++)
    printf("%s ", B[i].c_str());
  printf("%s\n", B[N-1].c_str());
  puts("Stable");
  for (size_t i = 0; i < N - 1; i++)
    printf("%s ", A[i].c_str());
  printf("%s\n", A[N-1].c_str());
  puts(std::mismatch(A, A + N, B).first == A + N ? "Stable" : "Not stable");
  return 0;
}