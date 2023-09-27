#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string line;
  int a,b,c;
  getline (cin,line);
  stringstream(line) >> a >> b >> c;
  if ( a < b && b < c )
  { cout << "Yes\n"; }
  else
  { cout << "No\n"; }
  return 0;
}