#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  if (x < r || W - r < x || y < r || H - r < y)
    cout << "No" << endl;
  else
      cout << "Yes" << endl;

  return 0;
}