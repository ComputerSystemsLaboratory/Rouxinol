#include <iostream>

using namespace std;

int main() {
  int n, q;
  cin >> n;

  int S[n];
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  cin >> q;
  int v;
  int cnt = 0;
  for (int i = 0; i < q; i++) {
    cin >> v;
    for (int j = 0; j < n; j++) {
      if (S[j] == v) {
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
  
  return 0;
}