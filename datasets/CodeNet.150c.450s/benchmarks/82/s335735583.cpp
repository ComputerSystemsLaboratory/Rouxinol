#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct Dice {
  vector<int> num;
  void roll_north() {
    int t = num.at(0);
    num.at(0) = num.at(1);
    num.at(1) = num.at(5);
    num.at(5) = num.at(4);
    num.at(4) = t;
  }
  void roll_south() {
    int t = num.at(0);
    num.at(0) = num.at(4);
    num.at(4) = num.at(5);
    num.at(5) = num.at(1);
    num.at(1) = t;
  }
  void roll_east() {
    int t = num.at(0);
    num.at(0) = num.at(3);
    num.at(3) = num.at(5);
    num.at(5) = num.at(2);
    num.at(2) = t;
  }
  void roll_west() {
    int t = num.at(0);
    num.at(0) = num.at(2);
    num.at(2) = num.at(5);
    num.at(5) = num.at(3);
    num.at(3) = t;
  }
  void spin() {
    int t = num.at(1);
    num.at(1) = num.at(2);
    num.at(2) = num.at(4);
    num.at(4) = num.at(3);
    num.at(3) = t;
  }
};

int main() {
  Dice d;
  rep(i, 6) {
    int n; cin >> n;
    d.num.push_back(n);
  }
  int q;
  cin >> q;
  rep(i, q) {
    int top, front;
    cin >> top >> front;
    
    bool find = false;
    rep(j, 2) {
      rep(k, 4) {
        if (d.num.at(0) == top) {
          find = true;
          break;
        }
        d.roll_north();
      }
      if (find) {
        break;
      }
      d.roll_west();
    }
    rep(j, 4) {
      if (d.num.at(1) == front) {
        cout << d.num.at(2) << endl;
        break;
      }
      d.spin();
    }

    // bool find = false;
    // rep(j, 4) {
    //   rep(k, 4) {
    //     if (t.num.at(0) == top && t.num.at(1) == front) {
    //       find = true;
    //       break;
    //     }
    //     t.roll_north();
    //   }
    //   t.roll_west();
    //   if (find) {
    //     cout << t.num.at(0) << endl;
    //     break;
    //   }
    // }
  }
}
