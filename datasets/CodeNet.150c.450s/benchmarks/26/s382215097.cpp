#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string line;
  int a,b;
  getline (cin,line);
  stringstream(line) >> a >> b;
  if ( a < b )
  { cout << "a < b\n"; }
  else if ( a > b )
  { cout << "a > b\n"; }
  else
  { cout << "a == b\n"; }
  return 0;
}