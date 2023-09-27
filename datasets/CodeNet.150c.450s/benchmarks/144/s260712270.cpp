#include <iostream>
using namespace std;

int main(void)
{
  int n, m, l, i, j, k;
  long long sum;
  int a[101][101] = {}, b[101][101] = {};
  cin >> n >> m >> l;
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < l; j++) {
      cin >> b[i][j];
    }
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < l; j++) {
      sum = 0;
      if (j == l - 1) break;
      for (k = 0; k < m; k++){
        sum += a[i][k] * b[k][j];
      }
      cout << sum << " ";
    }
    for (k = 0; k < m; k++) sum += a[i][k] * b[k][j];
    cout << sum << endl;
  }
  return 0;
}