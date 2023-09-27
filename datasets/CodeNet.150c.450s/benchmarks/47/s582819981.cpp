#include <iostream>
using namespace std;

int main() {

  int W,H,x,y,r;

  cin >> W >> H >> x >> y >> r;

  bool isOverLineW = false;
  bool isOverLineH = false;
  if(x+r > W || x < 0)
    isOverLineW = true;
  if(y+r > H || y < 0)
    isOverLineH = true;

  if(isOverLineW || isOverLineH){
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}