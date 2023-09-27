#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<vector<char>> ch = {{}, {'.', ',', '!', '?', ' '}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
  int T;
  cin >> T;
  for (int i = 0; i < T; i++){
    string S;
    cin >> S;
    int N = S.size();
    int cnt = 0;
    int c = 0;
    for (int j = 0; j < N; j++){
      if (S[j] == '0'){
        if (cnt != 0){
          cout << ch[c][(cnt - 1) % ch[c].size()];
          cnt = 0;
        }
      } else {
        cnt++;
        c = S[j] - '0';
      }
    }
    cout << endl;
  }
}
