#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, m, l;
  cin >> n >> m >> l;

  long A[n][m];
  long B[m][l];
  long C[n][l]; 

  fill(&C[0][0], &C[n+1][0], 0);

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin >> A[i][j];
  
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < l; ++j)
      cin >> B[i][j];

  for (int i = 0; i < n; ++i)
    for (int k = 0; k < m; ++k)
      for (int j = 0; j < l; ++j)
        C[i][j] += A[i][k] * B[k][j];

  for (int i = 0; i < n; ++i) {
    cout << C[i][0];
    for (int j = 1; j < l; ++j)
      cout << " " << C[i][j];
    cout << endl;
  }
}
