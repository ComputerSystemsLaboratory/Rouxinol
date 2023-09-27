#include <iostream>
#include <cmath>
using namespace std;

int count = 0; // count the number of iterations
int solve(int E) {
  int ans = E;
  for (int y = 0; y*y <= E; ++y)
    for (int z = 0; z*z*z <= E; ++z){
      // ++count; // Minimum number of counts when the looping is minimized; loop y and z thus.
      int x = (int) round(E-y*y-z*z*z);
      if (x + y*y + z*z*z == E && x >= 0)
	ans = min(ans, x + y + z);
    }
return ans;
}
int main() {
  int E;
  while (cin >> E && E>0) {
    cout << solve(E) << endl;
  }
}