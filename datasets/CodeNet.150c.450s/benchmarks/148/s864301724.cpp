#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  vector<string> T={"AC", "WA", "TLE", "RE"};
  
  vector<int> V(4, 0);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < T.size(); j++) {
      if (S.at(i) == T.at(j)) {
        V.at(j)++;
      }
    }
  }
  
  for (int i = 0; i < T.size(); i++) {
    cout << T.at(i) << " x " << V.at(i) << endl;
  }
}
