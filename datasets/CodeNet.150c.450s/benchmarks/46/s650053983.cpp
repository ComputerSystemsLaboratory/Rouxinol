#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

int main() {
  while (true) {
    int n;
    int x;
    cin >> n >> x;
    if (!n && !x) {
      break;
    }
  
    int count = 0;
  
    for (int i = 1; i <= n; ++i) {
      for (int j = i + 1; j <= n; ++j) {
        int k = x - i - j;
        if (j < k && k <= n) {
          ++count;
        }
      }
    }
  
    cout << count << endl;
  }

}