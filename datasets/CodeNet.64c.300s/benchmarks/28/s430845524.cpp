#include <iostream>
using namespace std;
int main()
{
  int W,H,x,y,r,a,b;
  cin >>W>>H>>x>>y>>r;
  a=y+r;
  b=x+r;
  if (y<r||x<r||a>H||b>W) {
    cout << "No" << '\n';
  }
  else{
    cout << "Yes" << '\n';
  }
  return 0;
}