#include<iostream>
using namespace std;

int main(void){
  double xa,ya,xb,yb,xc,yc,xd,yd;
  int n;
  cin >> n;
  while( --n >=0){
    cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;

    if( (yb - ya)/(xb - xa) == (yd - yc)/(xd - xc))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}