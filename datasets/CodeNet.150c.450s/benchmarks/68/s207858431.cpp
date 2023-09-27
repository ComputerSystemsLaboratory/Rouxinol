#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  while(cin >> n, n) {
    int a[1001];
    int dif = 1<<25;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      for(int j = 0; j < i; j++) dif = min(dif, abs(a[i] - a[j]));
    }
    cout << dif << endl;
  }
  return 0;
}