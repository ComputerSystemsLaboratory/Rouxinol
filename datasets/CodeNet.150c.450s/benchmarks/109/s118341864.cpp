#include <iostream>
#include <algorithm>
#include <string>
#define TIME 86400
using namespace std;

int flag[TIME + 1];

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) return 0;
    string p[n], q[n];
    int a[n][8], b[n][8], s[n], t[n];
    for (int i = 0; i < n; i++)
      cin >> p[i] >> q[i];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 8; j++) {
	if (j == 2 || j == 5) continue;
	a[i][j] = p[i][j] - '0';
	b[i][j] = q[i][j] - '0';
      }
    }
    
    for (int i = 0; i < n; i++) {
      s[i] = a[i][0] * 36000 + a[i][1] * 3600 + a[i][3] * 600 + a[i][4] * 60
	+ a[i][6] * 10 + a[i][7];
      t[i] = b[i][0] * 36000 + b[i][1] * 3600 + b[i][3] * 600 + b[i][4] * 60
	+ b[i][6] * 10 + b[i][7];
    }
    
    for (int i = 0; i < TIME + 1; i++)
      flag[i] = 0;
    
    for (int i = 0; i < n; i++)
      for (int j = s[i]; j < t[i]; j++)
	flag[j]++;
    
    int max = 0;
    for (int i = 1; i < TIME + 1; i++)
      if (flag[i] > max) max = flag[i];

    cout << max << endl;
  }
}