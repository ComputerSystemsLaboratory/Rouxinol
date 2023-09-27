#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <array>
using namespace std;

#define DEBUG(x) cerr << #x << " = " << x << endl

enum FACE { TOP, FRONT, RIGHT, LEFT, BACK, BOTTOM }; // 1..6
typedef array<int, 6> Dice;

FACE tbl[6][4] = {
  { TOP, BACK, BOTTOM, FRONT },
  { TOP, RIGHT, BOTTOM, LEFT },
  { TOP, FRONT, BOTTOM, BACK },
  { TOP, LEFT, BOTTOM, RIGHT },
  { FRONT, RIGHT, BACK, LEFT },
  { FRONT, LEFT, BACK, RIGHT }
};

enum MOVE { TOP_TO_BACK, TOP_TO_RIGHT, TOP_TO_FRONT, TOP_TO_LEFT, FRONT_TO_RIGHT, FRONT_TO_LEFT };

void rotate(Dice &d, FACE t[4]) {
  int tmp = d[t[3]];
  d[t[3]] = d[t[2]]; d[t[2]] = d[t[1]]; d[t[1]] = d[t[0]]; d[t[0]] = tmp;
}

vector<Dice> generate_all(Dice dice) {
  vector<Dice> res;
  for(int i = 0; i < 6; ++i) {
    for(int j = 0; j < 4; ++j) {
      res.emplace_back(dice);
      rotate(dice, tbl[FRONT_TO_RIGHT]);
    }
    if(i % 2 == 0) rotate(dice, tbl[TOP_TO_BACK]);
    else rotate(dice, tbl[TOP_TO_RIGHT]);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  Dice d;
  cin >> d[TOP];
  cin >> d[FRONT];
  cin >> d[RIGHT];
  cin >> d[LEFT];
  cin >> d[BACK];
  cin >> d[BOTTOM];
  string s; cin >> s;
  for(char c : s) {
    if(c == 'S') {
      rotate(d, tbl[TOP_TO_FRONT]);
    }
    if(c == 'E') {
      rotate(d, tbl[TOP_TO_RIGHT]);
    }
    if(c == 'W') {
      rotate(d, tbl[TOP_TO_LEFT]);
    }
    if(c == 'N') {
      rotate(d, tbl[TOP_TO_BACK]);
    }
  }
  cout << d[TOP] << endl;
}