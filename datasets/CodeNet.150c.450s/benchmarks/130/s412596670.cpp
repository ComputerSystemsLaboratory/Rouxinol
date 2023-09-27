#include <iostream>
using namespace std;

int main()
{
  int n, m, i, j;
  cin >> n >> m;
  int A[n][m], b[m], c[n];

  for(i=0;i<n;i++)
    c[i] = 0;

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      cin >> A[i][j];

  for(i=0;i<m;i++)
    cin >> b[i];

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      c[i] += A[i][j]*b[j];

  for(i=0;i<n;i++)
    cout << c[i] << endl;
}