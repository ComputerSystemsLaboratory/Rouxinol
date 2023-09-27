#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string line;
  int a,b,c;
  int n = 0;
  getline (cin,line);
  stringstream(line) >> a >> b >> c;
  while ( a <= b )
  {
    if ( c % a++ == 0 ) { n++; }
  }
  cout << n << '\n';
  return 0;
}