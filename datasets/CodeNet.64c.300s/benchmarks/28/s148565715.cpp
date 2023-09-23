#include<iostream>
using namespace std;

int main(void){
  int W, H, xr, yr, r, xr2, yr2;

  cin >> W >> H >> xr >> yr >> r;

  xr2 = xr;
  yr2 = yr;
  xr += r;
  yr += r;
  xr2 -= r;
  yr2 -= r;

  if ( xr <= W && yr <= H && xr2 >= 0 && yr2 >= 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}