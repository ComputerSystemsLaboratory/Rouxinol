#include <iostream>
using namespace std;

int gcd(int x, int y);

int main()
{
  int x,y,tmp;
  cin >> x >> y;
  if( x<y ){
    tmp = x;
    x = y;
    y = tmp;
  }                                          
  cout << gcd(x,y) << endl;
  return 0;
}

int gcd(int x, int y)
{
  if(y==0) return x;
  else return gcd(y, x%y);
}