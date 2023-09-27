#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int n, m;
  int a1, a2;
  int s1[100], s2[100];
  int sum1, sum2;
  while(cin >> n >> m, n + m) {
    sum1 = sum2 = 0;
    a1 = a2 = 101;
    for (int i = 0; i < n; i++) {
      cin >> s1[i];
      sum1 += s1[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> s2[i];
      sum2 += s2[i];
    }

    if((sum1 - sum2) % 2) {
      cout << -1 << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if((s1[i] - s2[j])*2 == sum1 - sum2 && s1[i]+s2[j] < a1+a2) {
          a1 = s1[i];
          a2 = s2[j];
        }
      }
    }
    if(a1 + a2 > 200) {
      cout << -1 << endl;
    }
    else {
      cout << a1 << ' ' << a2 << endl;
    }

  }
}