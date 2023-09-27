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
  Dice dice(v);

  // 質問の数
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int q_top, q_front;
    cin >> q_top >> q_front;

    // 上面を質問の整数（上面）にする
    // NOTE: dice.top == q_top の場合は操作不要のため何もしない
    if (dice.back == q_top) {
      dice.roll('S');
    } else if (dice.right == q_top) {
      dice.roll('W');
    } else if (dice.left == q_top) {
      dice.roll('E');
    } else if (dice.front == q_top) {
      dice.roll('N');
    } else if (dice.bottom == q_top) {
      dice.roll('N');
      dice.roll('N');
    }

    // 質問の整数（前面）の位置を把握し、その面の右側の面を出力する
    int ans = 0;
    if (dice.left == q_front) {
      ans = dice.front;
    } else if (dice.front == q_front) {
      ans = dice.right;
    } else if (dice.right == q_front) {
      ans = dice.back;
    } else if (dice.back == q_front) {
      ans = dice.left;
    }
    cout << ans << endl;
  }

  return 0;
}

