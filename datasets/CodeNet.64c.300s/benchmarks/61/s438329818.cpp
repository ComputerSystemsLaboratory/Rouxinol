#include <iostream>
using namespace std;

int main()
{
  int r,c;
  cin >> r >> c;
  int a[101][101]={};
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  cin >> a[i][j];
	}
    }

  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  a[i][c]+=a[i][j];
	  a[r][j]+=a[i][j];
	}
    }
 
  for(int j=0;j<c;j++)
    {
      a[r][c]+=a[r][j];
    }

  for(int i=0;i<=r;i++)
    {
      for(int j=0;j<=c;j++)
	{
	  if(j!=c)
	    cout << a[i][j] << " ";
	  else
	    cout << a[i][j];
	}
      cout << endl;
    }

  return 0;
}