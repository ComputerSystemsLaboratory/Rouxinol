#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int i, a[3];
  REP(i, 3) cin >> a[i];
  sort(a, a + 3);
  cout << a[0] << " " << a[1] << " " << a[2] << endl;
}