#include <iostream>
#include<string>

using namespace std;

int main()
{
  int n;
  int m;
  int i;
  int j;
  
  int a[100][100]={0};
  int b[100]={0};
  int c[100]={0};
  
  cin >> n >> m;
  
/*  int a[n][m]={0};
  int b[m]={0};
  int c[n]={0};
  */
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin >> a[i][j];
    }
  }
  
  for(i=0;i<m;i++)
  {
  cin >> b[i];
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      c[i]+=a[i][j]*b[j];
    }
  }
  
  for(i=0;i<n;i++)
  {
  cout << c[i] <<"\n";
  }
}