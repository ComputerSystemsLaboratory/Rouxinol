#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    if(i % 3 == 0)
      cout << " " << i << flush;
    else
    {
      int m = i;
      while(m != 0)
      {
        if(m % 10 == 3)
        {
          cout << " " << i << flush;
          break;
        }
        m /= 10;
      }
    }
  }
  cout << endl;
  return 0;
}