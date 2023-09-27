#include <iostream>
#include <vector>
#include <algorithm>
using namespace	std;

int main() {
  int n;
  vector<int> a;
  vector<int> diff;

  while(cin >> n, n) {
    for(int i = 0; i < n; i++) {
      int A;
      cin >> A;
      a.push_back(A);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n-1; i++) {
      diff.push_back(a[i+1]-a[i]);
    }

    sort(diff.begin(), diff.end());

    cout << diff[0] << endl;
    a.clear();
    diff.clear();
  }
  return 0;
}
