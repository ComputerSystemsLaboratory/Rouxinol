#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int w, n, i;
  cin >> w >> n;
  int num[w + 1], a[n + 1], b[n + 1];

  REP(i, w) num[i] = i + 1;
  REP(i, n) scanf("%d,%d" ,&a[i], &b[i]);
  REP(i, n) swap(num[a[i] - 1], num[b[i] - 1]);
  REP(i, w) cout << num[i] << endl;
}