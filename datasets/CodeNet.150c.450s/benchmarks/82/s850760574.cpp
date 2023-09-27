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
    } else if (ch == 'C') {
      num.at(0) = tmp.at(0);
      num.at(1) = tmp.at(2);
      num.at(2) = tmp.at(4);
      num.at(3) = tmp.at(1);
      num.at(4) = tmp.at(3);
      num.at(5) = tmp.at(5);
    }
  }
  void Print(int n) { cout << num.at(n) << endl; }
  int Check(int a) { return num.at(a); }
  void Check(int a, int b) {
    int upn, frontn;
    for (int i = 0; i < 6; i++) {
      if (a == num.at(i)) upn = i;
      if (b == num.at(i)) frontn = i;
    }
    if (upn == 4 && frontn == 0)
      Roll('S');
    else if (upn == 2 && frontn == 1)
      Roll('W');
    else if (upn == 1 && frontn == 5)
      Roll('N');
    else if (upn == 3 && frontn == 1)
      Roll('E');
  }
};

int main() {
  Dice D;
  for (int i = 0; i < 6; i++) {
    cin >> D.num.at(i);
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    if (a == D.Check(3))
      D.Roll('E');
    else if (a == D.Check(2))
      D.Roll('W');
    while (a != D.Check(0)) D.Roll('S');
    while (b != D.Check(1)) D.Roll('C');
    D.Print(2);
  }
}
