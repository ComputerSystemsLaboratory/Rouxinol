#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define RREP(i, n) for (int i = (n) - 1; i >= 0; i--)
#define sz(obj) ((int)(obj).size())
#define pf push_front
#define pb push_back

int main()
{
  int a[101] = {0}, n, m = 0;
  while (cin >> n){
    a[n]++;
  }
  REP(i, 101) m = max(m, a[i]);
  REP(i, 101) if (a[i] == m) cout << i << endl;
}