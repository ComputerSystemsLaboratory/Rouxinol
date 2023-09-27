#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    string x,y;
    cin >> x >> y;

    int m,n;
    m = x.length();
    n = y.length();

    vector< vector<int> > mat(m+1, vector<int>(n+1,0));

    for (int sum = 2; sum <= m+n; sum++) {
      for (int j = 1; j < sum; j++) {
        int k = sum - j;
        if (k <= 0 || k > n || j > m) continue;

        int plus = x[j-1] == y[k-1] ? 1 : 0;
        mat[j][k] = max(max(mat[j-1][k], mat[j][k-1]), mat[j-1][k-1] + plus);
      }
    }

    cout << mat[m][n] << eol;
  }
  
  return 0;
}