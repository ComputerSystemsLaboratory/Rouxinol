#include <iostream>
#include <cstring>

using namespace std;

bool square[21][21];

int main() {
  int N;
  while (true) {
    cin >> N;
    if (N == 0) break;
    memset(square, false, sizeof(square));
    for (int i = 0; i < N; i++) {
      int x, y;
      cin >> x >> y;
      square[x][y] = true;
    }
    int x = 10,  y = 10;
    int count = 0;
    if (square[x][y]) {
      square[x][y] = false;
      count++;
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
      string d;
      int amt;
      cin >> d >> amt;
      for (int j = 0; j < amt; j++) {
        if (d == "N") {
          y++;
        } else if (d == "E") {
          x++;
        } else if (d == "S") {
          y--;
        } else {
          x--;
        }
        if (square[x][y]) {
          square[x][y] = false;
          count++;
        }
      }
    }
    if (count == N) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }  
  return 0;
}