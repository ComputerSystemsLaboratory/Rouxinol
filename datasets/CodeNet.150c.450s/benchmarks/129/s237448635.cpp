#include <iostream>
using namespace std;
int main()
{
  int r,c,sum;
  cin>>r>>c;
  int t[r+1][c+1];

  for(int i=0;i<r;i++)
  {
    sum=0;
    for(int j=0;j<c;j++)
    {cin>>t[i][j];sum+=t[i][j];}
    t[i][c]=sum;
  }
  for(int i=0;i<=c;i++)
  {
    sum=0;
    for(int j=0;j<r;j++)
      sum+=t[j][i];
    t[r][i]=sum;
  }

  for(int i=0;i<=r;i++)
    for(int j=0;j<=c;j++)
      cout<<t[i][j]<<(j==c?'\n':' ');
}