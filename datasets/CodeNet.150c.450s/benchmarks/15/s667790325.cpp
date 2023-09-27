#include <iostream>
using namespace std;

#define MAX_S 10000
#define MAX_T 500

int main() {
  int n, q;
  int S[MAX_S], T[MAX_T];

  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> S[i];
  }

  cin >> q;
  for ( int i = 0; i < q; i++ ) {
    cin >> T[i];
  }

  int cnt = 0;
  for ( int i = 0; i < q; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      if (T[i] == S[j]) {
        cnt++;
        break;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}