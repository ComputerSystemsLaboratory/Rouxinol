#include <iostream>
#include<string>

using namespace std;

int main()
{
  int n;
  int m;
  int l;
  long a[100][100]={0};
  long b[100][100]={0};
  long c[100][100]={0};
  int i;
  int j;
  int k;
  
  cin >> n >> m >>l;
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin >> a[i][j];
    }
  }
  
  for(i=0;i<m;i++)
  {
    for(j=0;j<l;j++)
    {
      cin >> b[i][j];
    }
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<l;j++)
    {
      for(k=0;k<m;k++)
      {
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<l;j++)
    {
    cout << c[i][j];
    if(j!=(l-1))
      cout << " ";
    }
    cout << "\n";
  }
  
}