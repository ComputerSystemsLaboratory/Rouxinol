#include <iostream>

int gcd( int a, int b )
{
  if( a < b ) { return gcd( b, a ); }
  if( b > 0 ) { return gcd( b, a % b ); }
  return a;
}

int main()
{
  std::ios::sync_with_stdio( false );
  int a = 0, b = 0;
  std::cin >> a; std::cin.ignore();
  std::cin >> b;

  std::cout << gcd( a, b ) << std::endl;
}