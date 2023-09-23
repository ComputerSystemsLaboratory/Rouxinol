#include <iostream>
#include <cmath>
using namespace std;

#define MAX 10000

int main() {
  int n;
  int ele[MAX];
  int ans = 0;
  int i, j;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> ele[i];
  }

  for (i = 0; i < n; i++) {
    int len = sqrt(ele[i]);
    for (j = 2; j <= len; j++) {
      if (ele[i] % j == 0) {
        break;
      }
    }
    if (j == len + 1) {
      ans++;
    }
  }

  cout << ans << endl;
}