#include <iostream>
using namespace std;

int main()
{
  int i, j, a[4][13], N, x;
  char A;
  cin >> N;

  for(i=0;i<4;i++)
    for(j=0;j<13;j++)
      a[i][j] = 0;

  for(i=0;i<N;i++)
    {
      cin >> A >> x;
      if(A=='S') a[0][x-1]=1;
      if(A=='H') a[1][x-1]=1;
      if(A=='C') a[2][x-1]=1;
      if(A=='D') a[3][x-1]=1;
    }

  for(i=0;i<4;i++)
    for(j=0;j<13;j++)
      {
	if(a[i][j]==0)
	  {
	    if(i==0) cout << "S " << j+1 << endl;
	    if(i==1) cout << "H " << j+1 << endl;
	    if(i==2) cout << "C " << j+1 << endl;
	    if(i==3) cout << "D " << j+1 << endl;
	  }
      }
}