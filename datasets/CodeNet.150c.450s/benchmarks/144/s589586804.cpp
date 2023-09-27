#include <iostream>
using namespace std;

int main() {
  int n, m, l, a[110][110] = {0}, b[110][110] = {0};
  long long c[110][110] = {0};
  cin >> n >> m >> l;
  for (int i=0;i<n;i++)
    for (int j=0;j<m;j++)
      cin >> a[i][j];
  for (int i=0;i<m;i++)
    for (int j=0;j<l;j++)
      cin >> b[i][j];

  for (int i=0;i<n;i++)
    for (int j=0;j<l;j++)
      for (int k=0;k<m;k++)
        c[i][j] += a[i][k] * b[k][j];
  for (int i=0;i<n;i++) {
    for (int j=0;j<l-1;j++)
      cout << c[i][j] << " ";
    cout << c[i][l-1] << endl;
  }
}

