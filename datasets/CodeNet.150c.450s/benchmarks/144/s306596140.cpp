#include <iostream>
using namespace std;
int main()
{
  int n,m,l;
  cin>>n>>m>>l;
  long int ma1[n][m];
  long int ma2[m][l];
  long int ans[n][l];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>ma1[i][j];
  for(int i=0;i<m;i++)
    for(int j=0;j<l;j++)
      cin>>ma2[i][j];

  for(int k=0;k<l;k++)
  {
    for(int i=0;i<n;i++)
    {
      long int sum=0;
      for(int j=0;j<m;j++)
      {
      sum+=ma1[i][j]*ma2[j][k];
      }
      ans[i][k]=sum;
    }
  }

  for(int i=0;i<n;i++)
    for(int j=0;j<l;j++)
      cout<<ans[i][j]<<(j==l-1?'\n':' ');
}