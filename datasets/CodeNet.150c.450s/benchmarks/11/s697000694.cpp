#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char c[n];
  int a[n];
  for(int i=0;i<n;i++)
    {
      cin >> c[i] >> a[i];
    }
 
  char x[52];
  int y[52];

  for(int i=0;i<13;i++)
    {
      x[i]='S';     y[i]=i+1;
      x[i+13*1]='H';y[i+13*1]=i+1;
      x[i+13*2]='C';y[i+13*2]=i+1;
      x[i+13*3]='D';y[i+13*3]=i+1;
    }

  for(int i=0;i<52;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(x[i]==c[j]&&y[i]==a[j])goto out;
	 

	}
      cout << x[i] << " " << y[i] << endl;
    out:
      ;
    }

  return 0;
}

    