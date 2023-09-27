#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;++i)
using namespace std;

const int MAX_N = 10001, MAX_Q = 501;

int main()
{
  int n, q, s[MAX_N], t[MAX_Q], C;
  cin >> n; REP(i, n) cin >> s[i];
  cin >> q; REP(i, q) cin >> t[i];
  C = 0;
  REP(i, q) {
    int j = 0;
    s[n] = t[i];
    while (s[j] != t[i]) j++;
    if (j == n) continue;
    C++;
  }
  cout << C << endl;
  return 0;
}