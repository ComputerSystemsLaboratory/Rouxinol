#include <iostream>
#include <cstdlib>
#include <sstream>
#include <algorithm>

using namespace std;

int main(void) {
  int r, c;
  int j = 0;
  string item, line;
  cin >> r >> c;
  cin.ignore();
  int sheet[r + 1][c + 1];
  int row = 0;
  int column = 0;
  fill(sheet[0], sheet[r], 0);
  for(int i = 0; i < r; i++) {
    getline(cin, line);
    stringstream ss(line);
    while(getline(ss, item, ' '))
      sheet[i][j++] = atoi(item.c_str());
    j = 0;
  }
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      row += sheet[i][j];
    }
    sheet[i][c] = row;
    row = 0;
  }
  for(int i = 0; i < c + 1; i++) {
    for(int j = 0; j < r; j++) {
      column += sheet[j][i];
    }
    sheet[r][i] = column;
    column = 0;
  }
  for(int i = 0; i < r + 1; i++) {
    for(int j = 0; j < c + 1; j++) {
      cout << sheet[i][j];
      if(j != c)
        cout << ' ';
    }
    cout << endl;
  }
  return 0;
}