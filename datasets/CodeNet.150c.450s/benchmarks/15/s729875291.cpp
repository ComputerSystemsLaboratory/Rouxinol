#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,q;
  int count = 0;
  cin >> n;
  int *S = new int[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }
  cin >> q;
  int x;
  for (int i = 0; i < q; i++) {
    cin >> x;
    S[n] = x;
    int j = 0;
    while (S[j] != x) j++;
    if (j != n) count++;
  }

  cout << count << endl;

  return 0;
}