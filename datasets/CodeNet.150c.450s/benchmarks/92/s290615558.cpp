#include <iostream>
#include <vector>
#include <algorithm>

#define ALL(a) a.begin(),a.end()

using namespace std;

int main()
{
  unsigned a = 1, b;

  while ( cin >> a >> b ) {
    int c = 1, n = a + b;
    if ( n == 0 ) {
      cout << 0 << endl;
      continue;
    }
    while ( n /= 10 )
      c++;
    cout << c << endl;
  }

  return 0;
}