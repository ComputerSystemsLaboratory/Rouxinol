#include <bits/stdc++.h>
using namespace std;

int n;
int k;
int m;

int main() {
  cin >> n;
  int V[n];

  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> A(n, vector<int>(n));

  for (int i=0; i<n; i++) {
    cin >> V[i];
    cin >> k;
    if (k==0) {
      continue;
    } else {
      for (int j =0; j<k; j++) {
        cin >> m;
        A[i][m-1] = 1;
      }
    }
  }

  int D[n];
  for (int i=0; i<n; i++) D[i] = -1;
  D[0] = 0;

  queue<int> Q;
  Q.push(0);
  while(! Q.empty()) {
    int cur = Q.front();
    Q.pop();

    for (int i=0; i<n; i++) {
      if (A[cur][i] == 1 && D[i] == -1) {
        D[i] = D[cur] + 1;
        Q.push(i);
      }
    }
  }

  for (int i=0; i<n; i++) {
    cout << i+1 << " " << D[i] << endl;
  }
}
