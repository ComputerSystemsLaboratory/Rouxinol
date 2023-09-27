#include <bits/stdc++.h>
using namespace std;

int main() {
  int dice[6];
  for (int i=0; i<6; i++) cin >> dice[i];
  int q;
  cin >> q;

  for (int i=0; i<q; i++) {
    int x, y;
    cin >> x >> y;

    int ans;
    if (x == dice[0]) {
      if (y == dice[1])
        ans = dice[2];
      else if (y == dice[2])
        ans = dice[4];
      else if (y == dice[4])
        ans = dice[3];
      else if (y == dice[3])
        ans = dice[1];
    } else if (x == dice[1]) {
      if (y == dice[5])
        ans = dice[2];
      else if (y == dice[2])
        ans = dice[0];
      else if (y == dice[0])
        ans = dice[3];
      else if (y == dice[3])
        ans = dice[5];
    } else if (x == dice[2]) {
      if (y == dice[1])
        ans = dice[5];
      else if (y == dice[5])
        ans = dice[4];
      else if (y == dice[4])
        ans = dice[0];
      else if (y == dice[0])
        ans = dice[1];
    } else if (x == dice[3]) {
      if (y == dice[1])
        ans = dice[0];
      else if (y == dice[0])
        ans = dice[4];
      else if (y == dice[4])
        ans = dice[5];
      else if (y == dice[5])
        ans = dice[1];
    } else if (x == dice[4]) {
      if (y == dice[0])
        ans = dice[2];
      else if (y == dice[2])
        ans = dice[5];
      else if (y == dice[5])
        ans = dice[3];
      else if (y == dice[3])
        ans = dice[0];
    } else if (x == dice[5]) {
      if (y == dice[4])
        ans = dice[2];
      else if (y == dice[2])
        ans = dice[1];
      else if (y == dice[1])
        ans = dice[3];
      else if (y == dice[3])
        ans = dice[4];
    }

    cout << ans << endl;
  }

  return 0;
}

