#include <bits/stdc++.h>
using namespace std;

struct Dice {
 public:
  vector<int> num = vector<int>(6);
  vector<int> tmp = vector<int>(6);

  void Roll(char ch) {
    tmp = num;
    if (ch == 'S') {
      num.at(0) = tmp.at(4);
      num.at(1) = tmp.at(0);
      num.at(2) = tmp.at(2);
      num.at(3) = tmp.at(3);
      num.at(4) = tmp.at(5);
      num.at(5) = tmp.at(1);
    } else if (ch == 'W') {
      num.at(0) = tmp.at(2);
      num.at(1) = tmp.at(1);
      num.at(2) = tmp.at(5);
      num.at(3) = tmp.at(0);
      num.at(4) = tmp.at(4);
      num.at(5) = tmp.at(3);

    } else if (ch == 'N') {
      num.at(0) = tmp.at(1);
      num.at(1) = tmp.at(5);
      num.at(2) = tmp.at(2);
      num.at(3) = tmp.at(3);
      num.at(4) = tmp.at(0);
      num.at(5) = tmp.at(4);

    } else if (ch == 'E') {
      num.at(0) = tmp.at(3);
      num.at(1) = tmp.at(1);
      num.at(2) = tmp.at(0);
      num.at(3) = tmp.at(5);
      num.at(4) = tmp.at(4);
      num.at(5) = tmp.at(2);
    }
  }
  void Print() { cout << num.at(0) << endl; }
  void Print(int n) {
    for (int i = 0; i < n; i++) {
      cout << num.at(i) << " ";
    }
    cout << endl;
  }
};

int main() {
  Dice D;
  for (int i = 0; i < 6; i++) {
    cin >> D.num.at(i);
  }
  string str;
  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    char ch = str.at(i);
    D.Roll(ch);
  }
  D.Print();
}
