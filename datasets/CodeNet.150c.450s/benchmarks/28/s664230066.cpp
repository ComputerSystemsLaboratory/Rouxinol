#include <algorithm>
#include <cassert>
#include <iostream>
#include <limits>
#include <queue>
#include <vector>

#ifdef _DEBUG
#define ASSERT(x) cassert(x)
#define DLOG(x) cout << #x " " << x << endl;
#else
#define ASSERT(x)
#define DLOG(x)
#endif

using namespace std;

bool ok(vector<int>& ws, int64_t weight_limit, int count_limit) {
  size_t index = 0;
  for (int i = 0; i < count_limit; ++i) {
    for (int64_t w = 0; w + ws[index] <= weight_limit;) {
      w += ws[index++];
      if (index == ws.size()) return true;
    }
  }
  return false;
}

size_t search(vector<int>& ws, int k, size_t l, size_t r) {
  if (l >= r) return l;
  auto m = (l + r) / 2;
  if (ok(ws, m, k)) {
    return search(ws, k, l, m);
  } else {
    return search(ws, k, m + 1, r);
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> ws;
  ws.reserve(n);
  for (int i = 0; i < n; ++i) {
    int wi;
    cin >> wi;
    ws.push_back(wi);
  }
  cout << search(ws, k, 0, 100'000LL * 10'000LL) << endl;
}

