#include <iostream>

using namespace std;

int tsum[1000060];
int toddsum[1000060];

int main()
{
  int n;
  cin >> n;
  int last = 1;
  tsum[1] = 1;
  toddsum[1] = 1;

  while (n > 0)
    {
      for (;last < n+1; last++)
	{
	  for (int i = 1; i*(i+1)*(i+2)/6 < last+1; i++)
	    {
	      int tet = i*(i+1)*(i+2)/6;
	      if (last - tet >= 0 && 
		  (tsum[last] == 0 || tsum[last-tet] + 1 < tsum[last]))
		tsum[last] = tsum[last-tet]+1;
	      if ((tet % 2 == 1) &&
		  last - tet >= 0 &&
		  (toddsum[last] == 0 || 
		  toddsum[last-tet] + 1 < toddsum[last]))
		toddsum[last] = toddsum[last-tet]+1;
	    }
	}
      cout << tsum[n] << " " << toddsum[n] << "\n";
      cin >> n;
    }

  
}