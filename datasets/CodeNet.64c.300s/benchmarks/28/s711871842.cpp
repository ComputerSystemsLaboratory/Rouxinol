#include <iostream>
using namespace std;

int main(void)
{
  int w, h, x, y, r;
  bool flg = true;
  cin >> w >> h >> x >> y >> r;

  // ???????????§??????
  if (y - r < 0 || y + r > h || x - r < 0 || x + r > w) flg = false;

  // ??????
  cout << (flg ? "Yes" : "No") << endl;
}