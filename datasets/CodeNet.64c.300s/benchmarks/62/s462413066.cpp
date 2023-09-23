#include <iostream>
#define N 1000
using namespace std;

int main()
{
  int n,m,A[N][N],B[N],C[N],cnt=0;
  cin >> n >> m;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cin >> A[i][j];
        }
    }
  for(int i=0;i<m;i++)
    {
      cin >> B[i];
    }
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          int sum=A[i][j]*B[j];
          C[i]+=sum;
        }
    }
  for(int i=0;i<n;i++)
    {
      cout << C[i] <<endl;
    }
  return 0;
}