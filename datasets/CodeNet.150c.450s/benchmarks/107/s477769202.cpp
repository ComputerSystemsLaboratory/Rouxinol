#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int L[1000+10][1000+10];
string S1, S2;

int main() {
  cin >> S1 >> S2;
  for (int j = 0; j < 1000+10; j++) {
    L[0][j] = j; L[j][0] = j;
  }
  for (int x = 1; x <= S1.length(); x++) {
    for (int y = 1; y <= S2.length(); y++) {
      if (S1[x-1] == S2[y-1])
        L[x][y] = L[x-1][y-1];
      else {
        int A[3] = {L[x-1][y], L[x][y-1], L[x-1][y-1]};
        L[x][y] = *min_element(A, A+3) + 1;
      }
    }
  }
  /*for (int i = 0; i <= S1.length(); i++) {
    for (int j = 0; j <= S2.length(); j++) {
      cout << L[i][j] << ' ';
    }
    cout << endl;
  }*/
  cout << L[S1.length()][S2.length()] << endl;
}

