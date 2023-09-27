#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  int table[101][101];
  int r, c; cin >> r >> c;

  for (int i = 0; i < r; i++) {
    table[i][c] = 0;
    for (int j = 0; j < c; j++) {
      cin >> table[i][j];
      table[i][c] += table[i][j];
      if (i == 0) table[r][j] = table[i][j];
      else table[r][j] += table[i][j];
    }
  }
  
  for (int i = 0; i < r+1; i++) {
    int last = 0;
    for (int j = 0; j < c+1; j++) {
      if (i == r) {
	if (j < c) last += table[i][j];
      }
      if (i == r && j == c) {
	cout << last;
      } else {
	cout << table[i][j];
	if (j < c) cout << ' ';
      }
    }
    cout << endl;
  }
  return 0;
}