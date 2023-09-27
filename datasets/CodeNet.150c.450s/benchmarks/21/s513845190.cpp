#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string line;
  int x;
  getline (cin,line);
  stringstream(line) >> x;
  cout << x*x*x << '\n';
  return 0;
}