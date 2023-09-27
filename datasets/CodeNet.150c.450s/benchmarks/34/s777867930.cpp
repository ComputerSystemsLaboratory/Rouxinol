#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
int main() {
  int a, kai[31];
  kai[0] = 1;
  kai[1] = 1;
  kai[2] = 2;
  for (int i = 3; i < 31; i++) {
    kai[i] = kai[i - 1] + kai[i - 2] + kai[i - 3];
  }
  rep(i, 31) kai[i] = (kai[i] + 3649) / 3650;
  while (cin >> a, a)
    cout << kai[a] << endl;
  return 0;
}