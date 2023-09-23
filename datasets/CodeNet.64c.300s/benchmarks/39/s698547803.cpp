#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while (scanf("%d", &n) != EOF) {
    int cnt = 0;
    for (int a = 0; a <= 9; a++) {
      for (int b = 0; b <= min(n - a, 9); b++) {
        for (int c = 0; c <= min(n - a - b, 9); c++) {
          if (0 <= n - a - b - c && n - a - b - c <= 9) cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
}

