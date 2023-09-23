#include <iostream>
using namespace std;

int main()
{
  unsigned a, b;
  while ( cin >> a >> b ) {
    unsigned count = 0, n = a + b;
    if ( n )
      count++;
    while ( n /= 10 )
      count++;
    cout << count << endl;
  }

  return 0;
}