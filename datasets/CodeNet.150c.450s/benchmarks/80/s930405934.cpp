#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int a[4], b[4], s = 0, t = 0, i;

  REP(i, 4) cin >> a[i];
  REP(i, 4) cin >> b[i];
  REP(i, 4){
    s += a[i];
    t += b[i];
  }
  cout << max(s, t) << endl;
}