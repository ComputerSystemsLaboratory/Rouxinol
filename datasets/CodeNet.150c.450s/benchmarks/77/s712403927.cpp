#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
  while (true) {
    int field[21][21]; // ?????£???????????????????¨??????§?¨?
    int N; // ??????????????°
    int M; // ??????????????°
    int positionX = 10; // ????????????????????????x??§?¨?
    int positionY = 10; // ????????????????????????y??§?¨?
    memset(field, 0, sizeof(field));

    cin >> N;
    if (N == 0) {
      break;
    }
    for (int i=0; i<N; i++) {
      int x, y;
      cin >> x >> y;
      field[y][x] = 1;
    }

    cin >> M;
    for (int i=0; i<M; i++) {
      char direction;
      int distance;
      cin >> direction >> distance;
      switch (direction) {
      case 'N':
        for (int j=0; j<=distance; j++) {
          field[positionY+j][positionX] = 0;
        }
        positionY += distance;
        break;
      case 'E':
        for (int j = 0; j <= distance; j++) {
          field[positionY][positionX+j] = 0;
        }
        positionX += distance;
        break;
      case 'S':
        for (int j = 0; j <= distance; j++) {
          field[positionY-j][positionX] = 0;
        }
        positionY -= distance;
        break;
      case 'W':
        for (int j = 0; j <= distance; j++) {
          field[positionY][positionX-j] = 0;
        }
        positionX -= distance;
        break;
      }
    }

    bool ans = true;
    for (int i = 0; i < 21; i++) {
      for (int j = 0; j < 21; j++) {
        if (field[i][j] == 1) {
          ans = false;
        }
      }
    }
    if (ans) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}