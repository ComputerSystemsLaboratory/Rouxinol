#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
  int w,h,x,y,r;
  bool xflag,yflag;
  cin >> w;
  cin >> h;
  cin >> x;
  cin >> y;
  cin >> r;
  
  if(((x-r) >= 0) && ((x+r) <= w)){
    xflag = true;
  }else{
    xflag = false;
  }
  if(((y-r) >= 0) && ((y+r) <= h)){
    yflag = true;
  }else{
    yflag = false;
  }
  if(xflag && yflag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  return 0;
  }
}