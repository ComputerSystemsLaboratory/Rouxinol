#include <iostream>

using namespace std;

int main ( void )
{
  bool id[31] = { false };
  
  for ( int i = 0, x; (cin >> x) && i < 28; ++i )
    id[x] = true;
  for ( int i = 1; i < 31; ++i )
    if ( !id[i] ) cout << i << endl;
  return 0;
}