#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int Q;
int L[1000+10][1000+10];

int main() {
  cin >> Q;
  string X, Y;
  for (int i = 0; i < Q; i++) {
    for (int j = 0; j < 1000+10; j++) {
      L[0][j] = 0; L[j][0] = 0;
    }
    cin >> X >> Y;
    for (int x = 1; x <= X.length(); x++) {
      for (int y = 1; y <= Y.length(); y++) {
        if (X[x-1] == Y[y-1])
          L[x][y] = L[x-1][y-1]+1;
        else
          L[x][y] = max(L[x-1][y], L[x][y-1]);
      }
    }

    cout << L[X.length()][Y.length()] << endl;
  }
}

