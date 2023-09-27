#include <iostream>

using namespace std;

const int MAX_N = 21;

bool gem[MAX_N][MAX_N];

int main() {
  int N;
  while (cin >> N) {
    if (N == 0) break;
    for (int i = 0; i <= 20; i++) {
      for (int j = 0; j <= 20; j++) {
        gem[i][j] = false;
      }
    }
    for (int i = 0; i < N; i++) {
      int x, y;
      cin >> x >> y;
      gem[x][y] = true;
    }
    int M;
    cin >> M;
    int pos_x = 10, pos_y = 10;
    int count = 0;
    for (int i = 0; i < M; i++) {
      char c;
      int d;
      cin >> c >> d;
      while (d--) {
        if (c == 'N') pos_y++;
        if (c == 'S') pos_y--;
        if (c == 'E') pos_x++;
        if (c == 'W') pos_x--;
        if (gem[pos_x][pos_y]) {
          gem[pos_x][pos_y] = false;
          count++;
        }
      }
    }
    if (count == N) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}