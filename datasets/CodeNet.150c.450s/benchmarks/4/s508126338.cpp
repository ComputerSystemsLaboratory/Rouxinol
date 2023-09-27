#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  while(1)
  {
    int m, f, r;
    cin >> m >> f >> r;

    if(m == -1 && f == -1 && r == -1)
      break;

    if(m == -1 || f == -1)
    {
      cout << 'F' << endl;
      continue;
    }

    if(m+f > 79)
      cout << 'A' << endl;
    else if(m+f > 64)
      cout << 'B' << endl;
    else if(m+f > 49)
      cout << 'C' << endl;
    else if(m+f > 29)
      cout << (r > 49 ? 'C' : 'D') << endl;
    else
      cout << 'F' << endl;
  }
  return 0;
}