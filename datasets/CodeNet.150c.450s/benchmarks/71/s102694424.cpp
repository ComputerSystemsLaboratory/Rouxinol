#include <iostream>
using namespace std;
int main(void)
{
  int n;
  int a, b, c, d;
  int com;

  while(cin >> n)
    {
      com = 0;
      if(n == EOF) break;
      
      for(a = 0 ; a < 10 ; a++)
	{
	  for(b = 0 ; b < 10 ; b++)
	    {
	      for(c = 0 ; c < 10 ; c++)
		{
		  for(d = 0 ; d < 10 ; d++)
		    {
		      if(a + b + c + d == n) com++;
		    }
		}
	    }
	}
      cout << com << endl;
    }
  return 0;
}