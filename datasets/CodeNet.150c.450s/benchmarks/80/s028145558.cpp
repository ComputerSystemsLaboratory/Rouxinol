#include <iostream>

using namespace std;

int main ( void )
{
  int sum[2] = { 0 };

  for ( int i = 0, x; i < 8; ++i )
  {
     cin >> x;
     sum[i/4] += x;
  }

  if ( sum[0] > sum[1] )
    cout << sum[0] << endl;
  else
    cout << sum[1] << endl;

  return 0;
}