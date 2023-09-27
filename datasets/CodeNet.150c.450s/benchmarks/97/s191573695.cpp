#include <iostream>

using namespace std;

int pos[300][2];

int main()
{
  int n;
  pos [0][0] = 0;
  pos [0][1] = 0;

  int p,s;
  int t,b,l,r;

  cin >> n;
  while (n > 0)
    {
      t = b = l = r = 0;
      for (int i = 1; i < n; i++)
	{
	  cin >> p >> s;
	  switch(s)
	    {
	    case 0: 
	      pos[i][0] = pos[p][0] - 1;
	      pos[i][1] = pos[p][1];
	      break;
	    case 1:
	      pos[i][0] = pos[p][0];
	      pos[i][1] = pos[p][1] - 1;
	      break;
	    case 2:
	      pos[i][0] = pos[p][0] + 1;
	      pos[i][1] = pos[p][1];
	      break;
	    case 3:
	      pos[i][0] = pos[p][0];
	      pos[i][1] = pos[p][1] + 1;
	      break;
	    }
	  if (pos[i][0] > r) r = pos[i][0];
	  if (pos[i][0] < l) l = pos[i][0];
	  if (pos[i][1] > t) t = pos[i][1];
	  if (pos[i][1] < b) b = pos[i][1];
	}
      cout << r - l + 1 << " " << t - b + 1 << "\n";
      cin >> n;
    }

}