#include <iostream>
using namespace std;

#define ROW_MAX 100
#define COL_MAX 100

int main() {
  int n, m;
  int a[ROW_MAX][COL_MAX];
  int b[COL_MAX];

  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  for (int j = 0; j < m; j++)
    cin >> b[j];

  for (int i = 0; i < n; i++) {
    int res_sum = 0;
    for (int j = 0; j < m; j++) {
      res_sum += a[i][j] * b[j];
    }
    cout << res_sum << endl;
  }

  return 0;
}

