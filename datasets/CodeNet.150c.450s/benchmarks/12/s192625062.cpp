#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int H[250];
  for (int i = 1; i <= n; i++) {
    cin >> H[i];
  }

  for (int i = 1; i <= n; i++) {
    cout << "node " << i << ": ";
    cout << "key = " << H[i] << ", ";
    if (i / 2 > 0) cout << "parent key = " << H[i / 2] << ", ";
    if (i * 2 <= n) cout << "left key = " << H[i * 2] << ", ";
    if (i * 2 + 1 <= n) cout << "right key = " << H[i * 2 + 1] << ", ";
    cout << endl;
  }

  return 0;
}