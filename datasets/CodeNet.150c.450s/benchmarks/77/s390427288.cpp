#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    int j[30][30] = {0};
    for(int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      j[y][x] = 1;
    }

    int m;
    cin >> m;
    int nx = 10, ny = 10, num = 0;
    for(int i = 0; i < m; i++) {
      char d;
      int s;
      cin >> d >> s;

      int y = 0, x = 0;
      if(d == 'N') y++;
      else if(d == 'S') y--;
      else if(d == 'E') x++;
      else if(d == 'W') x--;

      for(int k = 0; k < s; k++) {
        nx += x;
        ny += y;
        if(j[ny][nx] == 1) {
          num++;
          j[ny][nx] = 0;
        }
      }
    }

    if(num == n) cout << "Yes";
    else cout << "No";
    cout << endl;
  }

	return 0;
}