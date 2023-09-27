#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int u,k;
    cin >> u >> k;

    vector<int> row(n, 0);
    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;

      row[v-1] = 1;
    }

    // output
    cout << row[0];
    for (int j = 1; j < n; j++) {
      cout << " " << row[j];
    }
    cout << eol;
  }
  
  return 0;
}