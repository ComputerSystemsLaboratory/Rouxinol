#include <iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int ma[n][m];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>ma[i][j];
  int l[m];
  for(int i=0;i<m;i++)
    cin>>l[i];

  for(int i=0;i<n;i++)
  {
    int sum=0;
    for(int j=0;j<m;j++)
    {
      sum+=ma[i][j]*l[j];
    }
    cout<<sum<<endl;
  }
}