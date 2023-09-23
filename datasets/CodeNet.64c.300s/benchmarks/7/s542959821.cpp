#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[4][13]={0};
  char x;
  int y;
 
  for(int i=0;i<n;i++)
    {
      cin >> x >> y;
      if(x=='S')
	a[0][y-1]=1;
      if(x=='H')
	a[1][y-1]=1;
      if(x=='C')
	a[2][y-1]=1;
      if(x=='D')
	a[3][y-1]=1;
    }


  for(int i=0;i<4;i++)
    {
      for(int j=0;j<13;j++)
	{
	  if(a[i][j]==0)
	    {
	      if(i==0)cout << 'S' << " " << j+1 << endl;
	      if(i==1)cout << 'H' << " " << j+1 << endl;
	      if(i==2)cout << 'C' << " " << j+1 << endl;
	      if(i==3)cout << 'D' << " " << j+1 << endl;
	    }
	}
    }

  return 0;
}