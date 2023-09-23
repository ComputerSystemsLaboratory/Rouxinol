#include <bits/stdc++.h>
using namespace std;

int main()
{
  int s[2][4];
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++){
      cin >> s[i][j];
      if (j != 0) s[i][j] += s[i][j - 1];
    }
  }

  cout << max(s[0][3], s[1][3]) << endl;

  return 0;
}