#include<iostream>

using namespace std;

int gcd( int x, int y )
{
  if ( y == 0 )
    return x;

  int z = x % y;

  return gcd(y, z);
}

int main()
{
  int a,b;
  
  while ( cin >> a >> b )
    {
      int g = gcd(a, b);
      int l = a / g * b;
      cout << g << " " << l << endl;
    }
  
  return 0;
}