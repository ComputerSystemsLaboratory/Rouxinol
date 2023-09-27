#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  while (true) {
    int n, x; cin >> n >> x;
    if (n == 0 && x == 0) break;

    int db[n+1][n+1][n+1];
    for (int i = 1; i <= n; i++) {
      for (int j = i+1; j <= n; j++) {
	for (int k = j+1; k <= n; k++) {
	  db[i][j][k] = i+j+k;
	}
      }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = i+1; j <= n; j++) {
	for (int k = j+1; k <= n; k++) {
	  if (db[i][j][k] == x) ans++;
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}