#include <iostream>
using namespace std;
int main( void )
{
  char *s[] = { "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday", "Sunday" };
  int n[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
  int m,d,r,i;
  while( 1 ){
    cin >> m >> d;
    if( m==0 ) break;
    r=0;
    for( i=1; i<m; i++ ) r += n[i];
    r += d;
    cout << s[(r+2)%7] << endl;
  }
  return 0;
}