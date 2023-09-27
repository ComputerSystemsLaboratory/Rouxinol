#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  
  bool judge = true;
  
  if (x-r < 0 || x+r > W) {
    judge = false;
  }
  if (y-r < 0 || y+r > H) {
    judge = false;
  }
  
  if (judge) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
 
}
