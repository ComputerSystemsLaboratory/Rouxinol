#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int W, H;
  int x, y, r;

  // Inputs
  cin >> W >> H >> x >> y >> r;

  string Ans;
  if ((x >= r) && (x <= (W -r)) && (y >= r) && (y <= (H - r))) {
    Ans = "Yes";
  } else {
    Ans = "No";
  }
  cout << Ans << endl;
}