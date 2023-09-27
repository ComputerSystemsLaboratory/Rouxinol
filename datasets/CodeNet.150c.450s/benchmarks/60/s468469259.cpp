#include <iostream>

using namespace std;

int main()
{
  int n, k[102], v[101][102] = {0}, i, j, l, a;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    cin >> k[i];
    for (j = 0; j < k[i]; j++) {
      cin >> v[i][j + 1];
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n + 1; j++) {
      if (k[i] == 0) {
        for (l = v[i][j - 1]; l < n - 1; l++) {
          cout << "0 ";
        }
        cout << "0\n";
        break;
      }
      else {
        if (v[i][j] != 0) {
          k[i]--;
          for (l = v[i][j - 1]; l < v[i][j] - 1; l++) {
            cout << "0 ";
          }
          if (v[i][j] == n) {
            cout << "1\n";
            break;
          }
          else {
            cout << "1 ";
          }
        }
      }
    }
  }

  return 0;
}