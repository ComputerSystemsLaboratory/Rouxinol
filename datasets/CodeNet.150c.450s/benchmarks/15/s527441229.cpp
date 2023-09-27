#include<iostream>
using namespace std;

int Linear_Search(int S[], int T[], int n, int q) {
  int result = 0;
  for (int i = 0; i < q; i++) {
    for (int j = 0; j < n; j++) {
      if (T[i] == S[j]) {
        result++;
        break;
      }
    }
  }

  return result;
}

int main() {
  int S[10000], T[1000];
  int n, q, result;

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> S[i];

  cin >> q;

  for (int i = 0; i < q; i++)
    cin >> T[i];

  result = Linear_Search(S, T, n, q);

  cout << result << endl;

  return 0;
}

