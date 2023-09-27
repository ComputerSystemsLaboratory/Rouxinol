#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int cnt = 0;
  int flag = 1;
  while (flag) {
    flag = 0;
    for (int i=n-1; i>0; i--) {
      if (a[i] < a[i-1]) {
        int temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
        flag = 1;
        cnt++;
      }
    }
  }

  for (int i=0; i<n-1; i++) cout << a[i] << " ";
  cout << a[n-1] << endl;
  cout << cnt << endl;

  return 0;
}

