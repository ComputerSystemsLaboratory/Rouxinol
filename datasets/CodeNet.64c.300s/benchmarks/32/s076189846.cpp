#include <iostream>
using namespace std;

int main()
{
  int n, i, j, temp;
  long int Sum=0;

  cin >> n;
  int a[n];
  
  for(i=0; i<n; i++)
    {
      cin >> a[i];
    }
  
  for(i=0; i<n; i++)
    {
      Sum += a[i];
    }

  for(i=0; i<n; i++)
    {
      for(j=i+1; j<n; j++)
	{
	  if(a[i] < a[j])
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
	}
    }

  cout << a[n-1] << " " << a[0] << " " << Sum <<endl;

  return 0;
}