#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> S(n);
  for (int i = 0; i < n; ++i) {
    cin >> S[i];
  }

  int q;
  cin >> q;

  int C = 0;
  int t;
  for (int i = 0; i < q; ++i) {
    cin >> t;
    for (int j = 0; j < n; ++j) {
      if (t == S[j]) {
        ++C;
        break;
      }
    }
  }
  cout << C << endl;

  return 0;
}