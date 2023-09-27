#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main()
{
  int N, M;
  while (~scanf("%d %d", &N, &M)) {
    if ((N|M) == 0)
      break;

    vector<int> h(N), w(M);
    for (int i = 0; i < N; ++i)
      scanf("%d", &h[i]);
    for (int i = 0; i < M; ++i)
      scanf("%d", &w[i]);

    map<int, int> h_cnt, w_cnt;
    for (int i = 0; i < N; ++i) {
      int sum = 0;
      for (int j = i; j < N; ++j) {
	sum += h[j];
	++h_cnt[sum];
      }
    }
    for (int i = 0; i < M; ++i) {
      int sum = 0;
      for (int j = i; j < M; ++j) {
	sum += w[j];
	++w_cnt[sum];
      }
    }

    int ans = 0;
    for (map<int, int>::iterator it = h_cnt.begin(); it != h_cnt.end(); ++it) {
      map<int, int>::iterator jt = w_cnt.find(it->first);
      if (jt == w_cnt.end())
	continue;
      ans += it->second * jt->second;
    }

    printf("%d\n", ans);
  }
  return 0;
}