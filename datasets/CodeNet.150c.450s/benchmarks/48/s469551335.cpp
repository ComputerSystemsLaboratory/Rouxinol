#include<iostream>
#include<math.h>

using namespace std;

int main() {
  int e, x, y, z, y_max, z_max, ans;
  while(true) {
    cin >> e;
    if(e == 0) break;
    ans = e;
    z_max = (int) (pow(e, 1.0/3.0)+1);
    for(z = 0; z <= z_max; z++) {
      y_max = (int) (sqrt(e-z*z*z)+1);
      for(y = 0; y <= y_max; y++) {
	x = e - y*y - z*z*z;
	if(ans > x+y+z && x >= 0) ans = x+y+z;
      }
      if(z == z_max) cout << ans << endl;
    }
  }

  return 0;
}

  