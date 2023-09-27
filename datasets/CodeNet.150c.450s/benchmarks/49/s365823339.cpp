#include <iostream>
#include <algorithm>
#include <array>
#include <numeric>

using namespace std;

int main() {
  array<int,100> s;
  int n;
  while ((cin >> n) && n != 0) {
    for (int i=0; i<n; i++) cin >> s[i];
    int ssum = accumulate(s.begin(), s.begin()+n, 0);
    int smax = *max_element(s.begin(), s.begin()+n);
    int smin = *min_element(s.begin(), s.begin()+n);
    cout << (ssum-smax-smin)/(n-2) << endl;
  }
  return 0;
}