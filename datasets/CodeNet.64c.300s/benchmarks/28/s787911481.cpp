#include<iostream>
using namespace std;
int main(){
  int W;
  int H;
  int x;
  int y;
  int r;
  cin >> W >> H >> x >> y >> r;
  int X=x+r;
  int Y=y+r;
  if((x>=r && X<=W) && (y>=r && Y<=H)){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}