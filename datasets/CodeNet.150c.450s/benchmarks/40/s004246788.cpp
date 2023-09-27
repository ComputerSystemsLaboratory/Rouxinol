#include <bits/stdc++.h>
using namespace std;

int main() {
  int dice[6];
  for (int i=0; i<6; i++) cin >> dice[i];
  string s;
  cin >> s;

  // dice[0] が常に上
  for (int i=0; i<s.size(); i++) {
    int temp = dice[0];
    switch(s[i]) {
    case 'E':
      dice[0] = dice[3];
      dice[3] = dice[5];
      dice[5] = dice[2];
      dice[2] = temp;
      break;
    case 'W':
      dice[0] = dice[2];
      dice[2] = dice[5];
      dice[5] = dice[3];
      dice[3] = temp;
      break;
    case 'S':
      dice[0] = dice[4];
      dice[4] = dice[5];
      dice[5] = dice[1];
      dice[1] = temp;
      break;
    case 'N':
      dice[0] = dice[1];
      dice[1] = dice[5];
      dice[5] = dice[4];
      dice[4] = temp;
      break;
    }
  }

  cout << dice[0] << endl;

  return 0;
}

