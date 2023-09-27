#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)

int main(int argc, char **argv)
{
  map<int, int> mode;
  int i;
  for (;;) {
    cin >> i;
    if (cin.eof())
      break;

    mode[i]++;
  }

  int m = 0;
  tr(mode, i) {
    m = max(i->second, m);
  }
  tr(mode, i) {
    if (i->second == m)
      cout << i->first << endl;
  }
  return 0;
}