/**
*    author:  y_takano
*    created: 18.06.2020 15:25:16
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  
  int i, j, k;
  cin >> i >> j >> k;

  if (i < j && j < k)
  {
      cout << "Yes\n";
  }
  else
  {
      cout << "No\n";
  }
  
  return 0;
}
