#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n && n) {
    int s[110];
    for (auto i=0; i<n; i++) {
      cin >> s[i];
    }
    int max = 0;
    int min = 1010;
    int sum = 0;
    for (auto i=0; i<n; i++) {
      sum += s[i];
      if (max < s[i]) max = s[i];
      if (min > s[i]) min = s[i];
    }
    cout << (sum - max - min)/(n-2) << endl;
  }
}