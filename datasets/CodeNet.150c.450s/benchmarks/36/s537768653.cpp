#include <iostream>

using namespace std;

typedef long long ll;

int main ( void )
{
  ll in;
  while( cin >> in )
  {
     ll sum = 0;
     for ( ll i = in; i < 600; i+=in )
     {
        sum += (i * i * in);
     }
     cout << sum << endl;
  }
  return 0;
}