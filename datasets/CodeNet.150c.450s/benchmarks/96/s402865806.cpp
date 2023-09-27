#include <bits/stdc++.h>
using namespace std;

const string M[] = {"",
                    ".,!? ",
                    "abc",
                    "def",
                    "ghi",
                    "jkl",
                    "mno",
                    "pqrs",
                    "tuv",
                    "wxyz"};
  
int main() {
  int T;
  cin >> T;
  cin.ignore();
  while(T--) {
    string s;
    getline(cin, s);
    for(int i = 0, j = -1, k = -1; i < s.size(); ++i) {
      int d = s[i] - '0';
      if(d == 0) {
        if(j != -1) {
          cout << M[j][k];
          j = k = -1;
        }
      } else {
        j = d;
        k = (k + 1) % M[j].size();
      }
    }
    cout << endl;
  }
  return 0;
}