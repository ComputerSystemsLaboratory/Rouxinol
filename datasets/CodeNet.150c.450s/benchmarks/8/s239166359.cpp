#include <bits/stdc++.h>
using namespace std;
int main() {
  string taro, hana;
  int n, taro_re, hana_re;
  taro_re = hana_re = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> taro >> hana;
    if (taro == hana) {
      taro_re++;
      hana_re++;
    } else if (taro > hana) {
      taro_re += 3;
    } else if (taro < hana) {
      hana_re += 3;
    }
  }
  cout << taro_re << " " << hana_re << endl;
}
