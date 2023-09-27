#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, n;
  while (cin >> a >> b, a || b){
    cin >> n;
    int Map[17][17] = {0}, x, y;
    bool No[16][16] = {false};
    for (int i = 0; i < n; i++){
      cin >> x >> y;
      No[y - 1][x - 1] = true;
    }
    Map[0][0] = 1;
    for (int i = 0; i < a; i++){
      for (int j = 0; j < b; j++){
        if (!No[j][i + 1])  Map[j][i + 1] += Map[j][i];
        if (!No[j + 1][i])  Map[j + 1][i] += Map[j][i];
      }
    }
    cout << Map[b - 1][a - 1] << endl;
  }
}