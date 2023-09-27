#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for( int i = 1; i <= n; i++ ) {
    if( i % 3 == 0 ) {
      cout << " " << i;
    }
    else {
      string buf = to_string( i );
      int x = buf.find( "3" );
      if( x >= 0 ) {
        cout << " " << i;
      }
    }
  }
  cout << endl;

  return 0;
}