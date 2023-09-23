#include <iostream>
#define N 101
using namespace std;

int main()
{
  int r,c,A[N][N],col=0,row=0,sum=0;
  cin >> r >> c;

  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
        {
          cin >> A[i][j];
        }
    }

  for(int i=0;i<r;i++)
    {
      col=0;
      for(int j=0;j<c;j++)
        {
          if(j) cout << " ";
          col+=A[i][j];
          cout << A[i][j];
        }
      cout << " " << col << endl;
    }
  for(int i=0;i<c;i++)
    {
      row=0;
      for(int j=0;j<r;j++)
        {
          row+=A[j][i];
        }
      cout << row << " ";
      sum+=row;
    }
  cout << sum << endl;
  return 0;
}