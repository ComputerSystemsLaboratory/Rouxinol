#include <iostream>
using namespace std;

int main(void)
{
  int r, c, i, j, count, lastcount;
  int map[101][101] = {};
  cin >> r >> c;
  for (i = 0; i < r; i++){
    for (j = 0; j < c; j++) cin >> map[i][j];
  }
  for (i = 0; i < r; i++){
    count = 0;
    for (j = 0; j < c; j++){
      count += map[i][j];
      cout << map[i][j] << " ";
    }
    cout << count << endl;
  }
  lastcount = 0;
  for (j = 0; j < c; j++){
    count = 0;
    for (i = 0; i < r; i++){
      count += map[i][j];
    }
    lastcount += count;
    cout << count << " ";
  }
  cout << lastcount << endl;
  return 0;
}