#include <iostream>
using namespace std;

int main()
{
  int W,H,x,y,r;
  cin >>W >>H >>x >>y >>r;

if(-100<=x && x<=100
  && -100<=y && y<=100
  && 0<W && W <=100
  && 0<H && H <=100
  && 0<r && r <=100){
  if ((x+r)>W || (x-r)<0 ||(y+r)>H || (y-r)<0) {
    cout <<"No" <<endl;
  }
  else {
    cout << "Yes" <<endl;
  }
}
  return 0;
}