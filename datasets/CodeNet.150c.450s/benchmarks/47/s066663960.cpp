#include <iostream>
using namespace std;

int main() {
  int W, H, x, y, r;
  int safe_min_x, safe_max_x, safe_min_y, safe_max_y;
  cin >> W >> H >> x >> y >> r;
  safe_min_x = r; safe_max_x = W-r;
  safe_min_y = r; safe_max_y = H-r;

  if ((safe_min_x <= x && x <=safe_max_x)&&(safe_min_y <= y && y <= safe_max_y)){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}