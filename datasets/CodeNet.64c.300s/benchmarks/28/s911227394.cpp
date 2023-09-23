#include <iostream>
using namespace std;

void hantei(int W, int H, int x, int y, int r){
  bool left = (x - r >= 0), right = (x + r <= W),
  up = (y + r <= H), down = (y - r >= 0);


  if(left && right && up && down){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}


int main(){
  int W, H, x, y, r;

  cin >> W >> H >> x >> y >> r;

  hantei(W, H, x, y, r);
}