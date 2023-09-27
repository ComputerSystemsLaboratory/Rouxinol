#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>

using namespace std;

int flip_board(vector<bitset<10000>> board, int R, int C, int count) {
  for (int i = 0; i < R; ++i) {
    if (count & (1 << i)) {
      board[i].flip();
    }
  }
  int sum = 0;
  for (int i = 0; i < C; ++i) {
    int col = 0;
    for (int j = 0; j < R; ++j) {
      if (board[j][i]) col++;
    }
    sum += max(col, R - col);
  }
  return sum;
}

int main() {
  int R, C;
  while (cin >> R >> C) {
    if (R == 0 || C == 0) {
      break;
    }
    vector<bitset<10000>> board(10);
    for (int i = 0; i < R; ++i) {
      for (int j = 0; j < C; ++j) {
        int num;
        cin >> num;
        if (num) board[i][j] = true;
      }
    }
    int count = 0;
    int ret = 0;
    while (count < (1 << R)) {
      int ups = flip_board(board, R, C, count);
      ret = max(ret, ups);
      ++count;
    }
    cout << ret << endl;
  }
}