#include <bits/stdc++.h>
using namespace std;

int lcs(string str1, string str2)
{
  int m = str1.size(), n = str2.size();
  int c[1001][1001];
  str1 = ' ' + str1;
  str2 = ' ' + str2;
  for (int i = 1; i <= m; i++) c[i][0] = 0;
  for (int i = 1; i <= n; i++) c[0][i] = 0;

  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      if (str1[i] == str2[j]) c[i][j] = c[i - 1][j - 1] + 1;
      else if (c[i - 1][j] > c[i][j - 1]) c[i][j] = c[i - 1][j];
      else  c[i][j] = c[i][j - 1];
    }
  }
  return (c[m][n]);
}
int main()
{
  int q;
  cin >> q;
  while (q--){
    string str1, str2;
    cin >> str1 >> str2;
    cout << lcs(str1, str2) << endl;
  }
}