#include <iostream>
#include<string>

using namespace std;

int main()
{
  int r;
  int c;
  int rc[101][101]={0};
  int rsum[100]={0};
  int csum[100]={0};
  int sum;
  int i;
  int j;
  
  cin >> r >> c;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
    cin >> rc[i][j];
    }
  }
  
    for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
    rsum[i]+=rc[i][j];
    csum[j]+=rc[i][j];
    sum+=rc[i][j];
    }
  }
  
  for(i=0;i<r;i++)
    rc[i][c]=rsum[i];
  
  for(j=0;j<c;j++)
    rc[r][j]=csum[j];
  
  rc[r][c]=sum;
  
  for(i=0;i<r+1;i++)
  {
    for(j=0;j<c+1;j++)
    {
    cout << rc[i][j];
    if(j!=c)
      cout << " ";
    }
    cout << "\n";
  }
}