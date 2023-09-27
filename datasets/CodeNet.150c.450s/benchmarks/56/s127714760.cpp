#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n;
  ll most = -INF, least = INF;
  fscanf(stdin, "%d", &n);
  ll sum = 0, val = -1;
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%lld", &val);
    most = max(most, val);
    least = min(least, val);
    sum += val;
  }
  fprintf(stdout, "%lld %lld %lld", least, most, sum);
  fprintf(stdout, "\n");
  return 0;
}