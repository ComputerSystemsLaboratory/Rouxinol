#include <algorithm>
#include <cstdio>

static const size_t n_max = 100000;
static std::pair<char, int> A[n_max], B[n_max];

void quick_sort(size_t p, size_t q) {
  if (q - p < 2)
    return;
  size_t r = p;
  for (size_t i = p; i < q; i++)
    if (A[i].second <= A[q-1].second)
      std::swap(A[r++], A[i]);
  r--;
  quick_sort(p, r);
  quick_sort(r, q);
}

int main() {
  size_t n;
  scanf("%zu\n", &n);
  for (size_t i = 0; i < n; i++)
    scanf("%c%d\n", &A[i].first, &A[i].second);
  std::copy(A, A + n, B);
  quick_sort(0, n);
  std::stable_sort(B, B + n, [](std::pair<char, int> a, std::pair<char, int> b) { return a.second < b.second; });
  puts(std::mismatch(A, A + n, B).first == A + n ? "Stable" : "Not stable");
  for (size_t i = 0; i < n; i++)
    printf("%c %d\n", A[i].first, A[i].second);
  return 0;
}