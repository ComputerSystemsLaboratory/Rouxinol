#include <iostream>
using namespace std;

int tax(int x, int p)
{
  return p * (100+x) / 100;
}

int solve(int x, int y, int s)
{
  int maximum = 0;
  for(int i=1;i<s;i++)
    for(int j=i;j<s;j++)
      if(tax(x, i) + tax(x, j) == s)
	maximum = max(maximum, tax(y, i) + tax(y, j));
  return maximum;
}


int main()
{
  int X, Y, S;

  while(cin >> X >> Y >> S && X>0)
    {
      cout << solve(X, Y, S) << endl;
    }
}

