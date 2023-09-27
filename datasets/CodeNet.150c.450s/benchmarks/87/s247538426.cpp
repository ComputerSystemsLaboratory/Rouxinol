#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

int calcmin(vector<int> v[5])  {
  int min = v[0].size();
  for (int i = 1; i < 5; i++) {
    if (min > v[i].size()) min = v[i].size();
  }
  return min;
}

int main() {
  int h, tmp, score;
  bool flag;
  while (cin >> h, h) {
    vector<int> column[5];
    int memo[h][5];
    flag = true;
    score = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> tmp;
        memo[i][j] = tmp;
      }
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < 5; j++) {
        column[j].pb(memo[h-i-1][j]);
      }
    }
    while (flag) {
      flag = false;
      vector<int> del_col, del_row;
      for (int i = 0; i < calcmin(column); i++) {
        if (column[0][i] == column[1][i] && column[1][i] == column[2][i] && column[2][i] == column[3][i] && column[3][i] == column[4][i]) {
          score += 5*column[2][i], flag = true;
          del_row.pb(i), del_row.pb(i), del_row.pb(i), del_row.pb(i), del_row.pb(i);
          del_col.pb(0), del_col.pb(1), del_col.pb(2), del_col.pb(3), del_col.pb(4);
        } else if (column[0][i] == column[1][i] && column[1][i] == column[2][i] && column[2][i] == column[3][i]) {
          score += 4*column[2][i], flag = true;
          del_row.pb(i), del_row.pb(i), del_row.pb(i), del_row.pb(i);
          del_col.pb(0), del_col.pb(1), del_col.pb(2), del_col.pb(3);
        } else if (column[1][i] == column[2][i] && column[2][i] == column[3][i] && column[3][i] == column[4][i]) {
          score += 4*column[2][i], flag = true;
          del_row.pb(i), del_row.pb(i), del_row.pb(i), del_row.pb(i);
          del_col.pb(1), del_col.pb(2), del_col.pb(3), del_col.pb(4);
        } else if (column[0][i] == column[1][i] && column[1][i] == column[2][i]) {
          score += 3*column[2][i], flag = true;
          del_row.pb(i), del_row.pb(i), del_row.pb(i);
          del_col.pb(0), del_col.pb(1), del_col.pb(2);
        } else if (column[1][i] == column[2][i] && column[2][i] == column[3][i]) {
          score += 3*column[2][i], flag = true;
          del_row.pb(i), del_row.pb(i), del_row.pb(i);
          del_col.pb(1), del_col.pb(2), del_col.pb(3);
        } else if (column[2][i] == column[3][i] && column[3][i] == column[4][i]) {
          score += 3*column[2][i], flag = true;
          del_row.pb(i), del_row.pb(i), del_row.pb(i);
          del_col.pb(2), del_col.pb(3), del_col.pb(4);
        }
      }
      for (int i = del_col.size()-1; i >= 0; i--) {
        column[del_col[i]].erase(column[del_col[i]].begin()+del_row[i]);
      }
    }
    cout << score << el;
  }
}