#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Dice {
  int top, front, right, left, back, bottom;
  // constructor
  //
  //         top:1
  //           |
  // left:4--front:2--right:3--back:5
  //           |
  //         bottom:6
  //
  Dice(vector<int> v) {
    top    = v.at(0);
    front  = v.at(1);
    right  = v.at(2);
    left   = v.at(3);
    back   = v.at(4);
    bottom = v.at(5);
  }

  void roll(char c) {
    int old_top = top;
    if (c == 'E') {
      top    = left;
      left   = bottom;
      bottom = right;
      right  = old_top;
    } else if (c == 'N') {
      top    = front;
      front  = bottom;
      bottom = back;
      back   = old_top;
    } else if (c == 'S') {
      top    = back;
      back   = bottom;
      bottom = front;
      front  = old_top;
    } else if (c == 'W') {
      top    = right;
      right  = bottom;
      bottom = left;
      left   = old_top;
    }
  }
};

int main() {
  // 各面の整数
  vector<int> v(6);
  for (int i = 0; i < 6; i++) {
    cin >> v.at(i);
  }
  // 命令を表す文字列
  string s;
  cin >> s;

  Dice dice(v);
  for (int i = 0; i < (int)s.length(); i++) {
    char c = s.at(i);
    dice.roll(c);
  }

  cout << dice.top << endl;
  return 0;
}

