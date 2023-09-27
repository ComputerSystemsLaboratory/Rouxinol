#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int C, R;

int solve(int idx, vector<vector<int> > a)
{
  if (idx >= C) {
    int ret = 0;
    for (int i = 0; i < R; ++i) {
      int cnt = 0;
      for (int j = 0; j < C; ++j) {
	if (a[j][i])
	  ++cnt;
      }
      ret += max(cnt, C-cnt);
    }
    return ret;
  }

  int ret = solve(idx+1, a);
  for (int i = 0; i < R; ++i)
    a[idx][i] ^= 1;
  return max(ret, solve(idx+1, a));
}

int main()
{
  while (~scanf("%d %d", &C, &R)) {
    if ((C|R) == 0)
      break;

    vector<vector<int> > a(C, vector<int>(R));
    for (int i = 0; i < C; ++i) {
      for (int j = 0; j < R; ++j)
	scanf("%d", &a[i][j]);
    }

    printf("%d\n", solve(0, a));
  }
  return 0;
}