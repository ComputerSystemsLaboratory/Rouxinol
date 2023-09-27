#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int matrix[n+1][m+1];
  for(int i=0;i<n;i++)
    {
      for(int k=0;k<m;k++)
	{
	  cin>>matrix[i][k];
	}
    }
      int row[200]={0};
      for(int i=0;i<m;i++)
    {
      cin>>row[i];
    }
  int col[200]={0};
  for(int i=0;i<n  ;i++)
    {
      for(int k=0;k<m;k++)
	{
	  col[i]=col[i]+matrix[i][k]*row[k];
	}
      cout<<col[i]<<endl;
    }
  return 0;
}

