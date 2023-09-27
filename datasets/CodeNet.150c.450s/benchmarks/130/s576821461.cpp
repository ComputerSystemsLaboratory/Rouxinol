#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n, m;
  cin >> n >> m;
  vector< vector<int> > A(n, vector<int>(m));
  vector<int> b(m);
  vector<int> c(n, 0);

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
      cin >> A[i][j];
  }
  for(int i = 0; i < m; i++)
    cin >> b[i];

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
      c[i] += A[i][j] * b[j];
  }
  for(int i = 0; i < n; i++)
    cout << c[i] << endl;
  return 0;
}