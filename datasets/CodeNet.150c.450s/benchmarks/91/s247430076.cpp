#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int pn[1000002];

int solve (int n) {
  int Count = 0;
  memset(pn, 0, n);
  pn[0] = pn[1] = 1;
  for (int i = 2; i <= n; i++) if (!pn[i]) for (int j = 2; i * j <= n; j++) pn[i * j] = 1;
  Count = count(pn, pn+n+1, 0);
  return Count;
}
	

int main (void) {
  int n;
  cin.tie(0);
  while (scanf("%d", &n) != EOF) {
    cout << solve(n) << endl;
  }
  return 0;
}