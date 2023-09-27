#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  while (cin >> a >> b, a){

    int n;
    cin >> n;

    int d[32][32] = {0};
    for (int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      d[x][y] = -1;
    }

    d[1][1] = 1;
    for (int i = 1; i < a + 1; i++){
      for (int j = 1; j < b + 1; j++){
        d[i][j] = (d[i][j] == -1 ? 0 : d[i][j] + d[i - 1][j] + d[i][j - 1]);
      }
    }

    cout << d[a][b] << endl;
  }
}