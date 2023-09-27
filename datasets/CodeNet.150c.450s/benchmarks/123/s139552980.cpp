#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

bool is_prime(int n)
{
  if (n <= 1) { return false; }
  if (n == 2 || n == 3) { return true; }
  if (n % 2 == 0) { return false; }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) { return false; }
  }
  return true;
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  int cnt = 0;
  map<int, int> memo;
  for (int i = 0; i < n; ++i) {
    int m = 0;
    fscanf(stdin, "%d", &m);
    if (memo.count(m)) {
      cnt += memo[m];
    }
    else if (is_prime(m)) {
      ++cnt;
      memo[m] = 1;
    }
    else { memo[m] = 0; }
  }
  fprintf(stdout, "%d\n", cnt);
  return 0;
}