#include <iostream>

using namespace std;

int n, q;
int* S;
int* T;

int solve() {
  int count = 0;
  for (int i = 0; i < q; i++) {
    int key = T[i];
    for (int j = 0; j < n; j++) {
      if (S[j] == key) {
        count++;
        break;
      }
    }
  }
  return count;
}

int main() {
  cin >> n;
  S = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }
  
  cin >> q;
  T = new int[q];
  for (int i = 0; i < q; i++) {
    cin >> T[i];
  }

  int res = solve();
  cout << res << endl;

  return 0;
}