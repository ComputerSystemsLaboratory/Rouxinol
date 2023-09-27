#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  while (true) {
    vector<int> imos(24 * 60 * 60);
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    
    for (int i = 0; i < n; i++) {
      string str1, str2;
      cin >> str1 >> str2;
      int t1, t2;
      t1 = ((str1[0] - '0') * 10 + str1[1] - '0') * 3600 +
           ((str1[3] - '0') * 10 + str1[4] - '0') * 60 +
            (str1[6] - '0') * 10 + str1[7] - '0';
      t2 = ((str2[0] - '0') * 10 + str2[1] - '0') * 3600 +
           ((str2[3] - '0') * 10 + str2[4] - '0') * 60 +
            (str2[6] - '0') * 10 + str2[7] - '0';

      imos[t1]++;
      imos[t2]--;
    }
    int ans = 0;
    for (int i = 1; i < 24 * 60 * 60; i++) {
      imos[i] += imos[i - 1];
      ans = max(ans, imos[i]);
    }

    cout << ans << endl;
  }
  
  return 0;
}