#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n = 0;

  cin >> n;
  
  for(int k = 3; k <= n;k++)
    {
      if(k % 3 == 0)
	{
	  cout << " " << k;
	}
      else if(k % 10 == 3)
	{
	  cout << " " << k;
	}
      else if((k % 100)/10 == 3)
	{
	  cout << " " << k;
	}
      else if((k % 1000)/100 == 3)
	{
	  cout << " " << k;
	}
      else if(k /1000 == 3)
	{
	  cout << " " << k;
	}
    }
  cout << endl;
}


