#include <bits/stdc++.h>
using namespace std;

int a[10][10101];

int main()
{
  int r, c;

  while (cin >> r >> c, r){

    for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
        cin >> a[i][j];
      }
    }

    int maxv = -1;
    for (int bit = 0; bit < (1 << r); bit++){
      int ans = 0;
      for (int j = 0; j < c; j++){
        int cnt = 0;
        for (int i = 0; i < r; i++){
          cnt += (a[i][j] + ((bit >> i) & 1)) % 2;
        }
        ans += max(cnt, r - cnt);
      }

      maxv = max(maxv, ans);
    }

    cout << maxv << endl;
  }
}