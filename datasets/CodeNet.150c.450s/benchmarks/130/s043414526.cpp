#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  int n, m; cin >> n >> m;
  int A[n][m];
  int b[m];
  long long ans[n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    ans[i] = 0;
    for (int j = 0; j < m; j++) {
      ans[i] += A[i][j]*b[j];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}