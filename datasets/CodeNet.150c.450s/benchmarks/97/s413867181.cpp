#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define MAX_N 399

int main(void) {
  vector<pair<int, int>> ans;
  while (true) {
    int num;
    cin >> num;
    if (num == 0)
      break;
    int board[MAX_N][MAX_N];
    fill(board[0], board[MAX_N], -1);
    board[199][199] = 0;
    for (int i = 1; i < num; i++) {
      int n, d;
      cin >> n >> d;
      for (int j = 0; j < 399; j++) {
        for (int k = 0; k < 399; k++) {
          // cout << "i:" << i << " j:" << j << " k:" << k << endl;
          if (board[j][k] == n) {
            switch (d) {
            case 0:
              board[j][k - 1] = i;
              break;
            case 1:
              board[j + 1][k] = i;
              break;
            case 2:
              board[j][k + 1] = i;
              break;
            case 3:
              board[j - 1][k] = i;
              break;
            }
          }
        }
      }
    }

    int left = 500, right = 0, up = 500, down = 0;
    for (int i = 0; i < 399; i++) {
      for (int j = 0; j < 399; j++) {
        if (board[i][j] != -1) {
          left = min(left, j);
          right = max(right, j);
          up = min(up, i);
          down = max(down, i);
          // cout << j << " " << i << endl;
          // cout << left << " " << right << " " << up << " " << down << endl;
        }
      }
    }

    ans.push_back(make_pair(right-left+1, down-up+1));
  }

  for(int i=0; i<ans.size(); i++) {
    cout << ans[i].first << " " << ans[i].second << endl;
  }

  return 0;
}