#include <iostream>
#include <cstring>

using namespace std;

#define H 10

int map[10][5];

int calc_and_remove() {
  int res = [&]{
    int res = 0;
    for(int i = 0; i < H; i++) {
      for(int j = 0; j < 5; j++) {
        int left = j;
        int right = left;
        int prev = map[i][left];
        while(right < 5  && map[i][right] && map[i][right] == prev) right++;
        if (right - left >= 3) {
          for(int k = left; k < right; k++) {
            res += map[i][k];
            map[i][k] = 0;
          }
        }
      }
    }
    return res;
  }();

  for(int i = H-1; i >= 0; i--) {
    for(int j = 0; j < 5; j++) {
      int cnt = 0;
      while (map[i][j] == 0 && cnt < 5) {
        for(int k = i; k >= 0; k--) {
          if (k-1 == -1) {
            map[k][j] = 0;
          }
          else {
            map[k][j] = map[k-1][j];
          }
        }
        cnt ++;
      }
    }
  }

  return res;
}

int main() {
  int h;
  while(cin >> h, h) {
    memset(map, 0, H*5*sizeof(int));
    for(int i = 0; i < h; i++)
      for(int j = 0; j < 5; j++)
        cin >> map[i+(10-h)][j];

    int res = 0;
    for(int k = 0; k < 20; k++) {
      res += calc_and_remove();
    }

    cout << res << endl;
  }

  return 0;
}