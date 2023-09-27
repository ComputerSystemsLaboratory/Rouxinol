#include <algorithm>
#include <cstdio>
#include <deque>
#include <numeric>
#include <vector>

using namespace std;

template <typename C>
vector<int> compact(const C& container) {
  vector<int> compacten;
  int sign = 1;
  int acc = 0;
  for (auto n : container) {
    if (n == 0) { continue; }
    if (sign * n > 0) {
      acc += n;
    } else {
      compacten.push_back(acc);
      acc = n;
      sign *= -1;
    }
  }
  compacten.push_back(acc);
  return compacten;
}

int main() {
  while (true) {
    int n;
    scanf("%d", &n);
    if (n == 0) { break; }

    deque<int> seq;
    for (int i = 0; i < n; ++i) {
      int x;
      scanf("%d", &x);
      seq.push_back(x);
    }
    int max_elem;
    if ((max_elem = *max_element(seq.begin(), seq.end())) <= 0) {
      printf("%d\n", max_elem);
      continue;
    }
    while (seq.size() != 0 && seq.front() <= 0) { seq.pop_front(); }
    while (seq.size() != 0 && seq.back() <= 0) { seq.pop_back(); }

    auto compacten_seq = compact(seq);
    vector<int> partial_sums = { compacten_seq.back() };
    for (int i = compacten_seq.size() - 1; i > 0; i -= 2) {
      int s = partial_sums.back() + compacten_seq[i - 1];
      partial_sums.push_back(compacten_seq[i - 2] + (s < 0 ? 0 : s));
    }
    printf("%d\n", *max_element(partial_sums.begin(), partial_sums.end()));
  }

  return 0;
}