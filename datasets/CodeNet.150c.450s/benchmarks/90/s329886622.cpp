#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, i, m = 0;
  vector<int> t(101);
  while (cin >> n)
    t[n]++;
  for (auto e : t)
    m = max(e, m);
  for (i = 1; i < 101; i++)
    if (m == t[i]) cout << i << endl;
}