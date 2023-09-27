#include <iostream>
#include <vector>
using namespace std;

int H;
int b[10][5];

struct range {
  int row;
  int left;
  int right;
};

void drop(int row, int col) {
  for (int i = row; i > 0; i--) {
    b[i][col] = b[i-1][col];
  }
  b[0][col] = -1;
}

void print_board() {
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < 5; j++) {
      cerr << b[i][j] << ' ';
    }
    cerr << endl;
  }
  cerr << endl;
}

void solve() {
  int ans = 0;
  while (1) {
    /* print_board(); */
    vector<range> deleted;
    for (int i = 0; i < H; i++) {
      int left = 0;
      for (int j = 1; j < 6; j++) {
        if (j == 5 || b[i][j] != b[i][j-1]) {
          if (j >= left + 3) {
            if (b[i][j-1] != -1) {
              range tmp = {i, left, j-1};
              deleted.push_back(tmp);
              ans += b[i][j-1] * (j - left);
            }
            break;
          } else {
            left = j;
          }
        }
      }
    }
    if (deleted.size() == 0) { break; }
    for (int k = 0; k < deleted.size(); k++) {
      range d = deleted[k];
      for (int j = d.left; j <= d.right; j++) {
        drop(d.row, j);
      }
    }
  }
  cout << ans << endl;
}

int main() {
  while (1) {
    cin >> H;
    if (H == 0) { break; }
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> b[i][j];
      }
    }
    solve();
  }
}


