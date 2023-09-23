#include<iostream>
using namespace std;

int main(){
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  
  if(x-r<0 || W<x+r || y-r<0 || H<y+r)
    cout << "No" << endl;
  else if(x-r>=0 && x+r<=W && y-r>=0 && y+r<=H)
    cout << "Yes" << endl;

  return 0;
}