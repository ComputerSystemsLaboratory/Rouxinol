#include <iostream>

using namespace std;

int main( void )
{
  int a, b, c;
  bool flag = false;
  cin >> a >> b >> c;
  if( a < b ){
    if( b < c ){
      flag = true;
    }
  }
  if( flag ){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return( 0 );
}