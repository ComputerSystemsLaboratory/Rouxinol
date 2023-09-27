#include <iostream>
#include <vector>
using namespace std;

int main() {
  int r, c, sumOfAll = 0;
  cin >> r >> c;
  vector<vector<int>> sheet;
  sheet.resize(r, vector<int>(c));
  vector<int> totalRows(r, 0), totalColumns(c, 0);

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int x;
      cin >> x;
      sheet[i][j] = x;
      sumOfAll += x;
      totalRows[i] += x;
      totalColumns[j] += x;

      cout << x << ' ';
    }
    cout << totalRows[i] << endl;
  }

  for (int i = 0; i < c; i++) {
    cout << totalColumns[i] << ' ';
  }
  cout << sumOfAll << endl;

  return 0;
}

