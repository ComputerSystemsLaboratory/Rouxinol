#include <iostream>
#include <stack>
using namespace std;
int main( void )
{
  int d;
  stack<int> s;
  while( 1 ){
    cin >> d;
    if( cin.eof() ) break;
    if( d ) s.push( d );
    else { cout << s.top() << endl; s.pop(); }
  }
  return 0;
}