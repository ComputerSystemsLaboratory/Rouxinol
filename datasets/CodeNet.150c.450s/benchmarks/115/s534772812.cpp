#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000



int solve(string x, string y) {
  int xl = x.size();
  int yl = y.size();
  int lcs[MAX + 1][MAX + 1];

  int i, j;
  for (i = 0; i < xl; i++)
    lcs[i][0] = 0;
  for (j = 0; j < yl; j++)
    lcs[0][j] = 0;

  // shift
  x = " " + x;
  y = " " + y;

  int maxlcs = 0;
  for (i = 1; i <= xl; i++) {
    for (j = 1; j <= yl; j++) {
      if (x[i] == y[j]) {
        lcs[i][j] = lcs[i - 1][j - 1] + 1;
      } else {
        int a = lcs[i][j - 1];
        int b = lcs[i - 1][j];
        lcs[i][j] = max(a, b);
      }
      maxlcs = max(maxlcs, lcs[i][j]);
    }
  }
  return maxlcs;
}

int main() {
  string s1, s2;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1;
    cin >> s2;
    cout << solve(s1, s2) << endl;
  }
}