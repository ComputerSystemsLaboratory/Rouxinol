#include <iostream>
#include <string>
#include <algorithm>

#define ALL(a) a.begin(),a.end()

using namespace std;

int main()
{
  string s;
  cin >> s;
  reverse(ALL(s));
  cout << s << endl;;

  return 0;
}