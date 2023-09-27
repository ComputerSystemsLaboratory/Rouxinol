#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

int testcase_ends() {
  int N, M;
  scanf("%d %d", &N, &M);

  if (N == 0 && M == 0)
    return 1;

  std::vector<int> h(N+1), w(M+1);
  for (int i=1; i<=N; ++i) {
    int tmp;
    scanf("%d", &tmp);
    h[i] = h[i-1] + tmp;
  }

  for (int j=1; j<=M; ++j) {
    int tmp;
    scanf("%d", &tmp);
    w[j] = w[j-1] + tmp;
  }

  std::map<int, int> H, W;
  for (int i=0; i<=N; ++i)
    for (int j=i+1; j<=N; ++j)
      ++H[h[j]-h[i]];

  for (int i=0; i<=M; ++i)
    for (int j=i+1; j<=M; ++j)
      ++W[w[j]-w[i]];

  long long res=0;
  for (const std::pair<const int, int> &p: H)
    res += p.second * W[p.first];

  printf("%lld\n", res);
  return 0;
}

int main() {
  while (true)
    if (testcase_ends())
      break;

  return 0;
}