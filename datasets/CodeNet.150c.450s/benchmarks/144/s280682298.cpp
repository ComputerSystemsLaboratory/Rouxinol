#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, m, l;
  long nm[101][101] = {0}, ml[101][101] = {0};
  long nl[101][101] = {0};

  cin >> n >> m >> l;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> nm[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> ml[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        nl[i][j] += nm[i][k] * ml[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << nl[i][0];
    for (int j = 1; j < l; j++) {
      cout << " " << nl[i][j];
    }
    cout << endl;
  }

  return 0;
}