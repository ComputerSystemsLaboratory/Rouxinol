#include<iostream>
#include<cstdio>
using namespace std;
static const int MAX  = 101;
int main ()
{
  int n,u,k,v;
  cin>>n;
  int M[MAX][MAX];
  for(int i  = 1;i<=n;i++)
    {
      for(int j = 1;j<=n;j++)
        {
          M[i][j] = 0;
        }
    }
  for(int i = 1;i<=n;i++)
   {
     cin>>u>>k;
     for(int j = 1;j<=k;j++)
       {
         cin>>v;
         M[u][v] = 1;
       }
   }
   for(int i = 1;i<=n;i++)
     {
       for(int j = 1;j<=n;j++)
        { if(j-1) cout<<" ";
          cout<<M[i][j];
     }
     cout<<endl;
   }
  return 0 ;
}

