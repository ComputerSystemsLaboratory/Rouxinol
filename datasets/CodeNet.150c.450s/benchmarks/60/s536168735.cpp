#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
  int N;
  int G[MAX_N][MAX_N];
  cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      G[i][j] = 0;
    }
  }
  for (int i=0; i<N; i++) {
    int tmp, n;
    cin >> tmp >> n;
    for (int j=0; j<n; j++) {
      int t;
      cin >> t; t--;
      G[i][t] = 1;
    }
  }

  for (int i=0; i<N; i++) {
    for (int j=0; j<N-1; j++) {
      cout << G[i][j] << " ";
    }
    cout << G[i][N-1] << endl;
  }

  return 0;
}