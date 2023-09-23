#include <iostream>
using namespace std;

int main()
{
  int x, n, i, j, k, C;

  while(1)
    {
      C=0;
      cin >> n >> x;

      if(n==0 && x==0)
	break;
      
      for(i=1;i<=n-2;i++)
	for(j=1+i;j<=n-1;j++)
	  for(k=1+j;k<=n;k++)
	    if(i+j+k==x)
	      C += 1;

      cout << C << endl;
    }
}