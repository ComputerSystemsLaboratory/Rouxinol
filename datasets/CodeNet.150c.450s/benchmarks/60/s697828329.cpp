#include<iostream>

using namespace std;
 
int main()
{
  int g[100][100];
  int n;
  
  for(int i=0; i<100; i++)
    {
      for(int j=0; j<100; j++)
	{
	  g[i][j]=0;
        }
    }
  
  cin>>n;

  int x,y,z;
    
  for(int i=0; i<n; i++)
    {
      cin>>x>>y;
      for(int j=0; j<y; j++)
	{
	  cin>>z;
	  g[x-1][z-1]=1;
        }
    }
  
  for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
	{
	  if(j!=0) cout<<" ";
	  cout<<g[i][j];
        }
      cout<<'\n';
    }
    return 0;
}
