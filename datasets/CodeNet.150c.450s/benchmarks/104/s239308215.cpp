#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int w, n, a, b, r[31], i, t;

  for (i = 1; i <= 30; i++) {
    r[i] = i;
  }

  cin >> w >> n;
  for (i = 0; i < n; i++) {
    scanf("%d,%d", &a, &b);
    t = r[a];
    r[a] = r[b];
    r[b] = t;
  }

  for (i = 1; i <= w; i++) {
    cout << r[i] << endl;
  }

  return 0;
}