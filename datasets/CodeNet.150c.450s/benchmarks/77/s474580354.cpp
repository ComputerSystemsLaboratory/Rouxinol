#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  int area[21][21];
  vector<string> texts;
  while (cin >> n && n) {
    rep(i, 21) {
      rep(j, 21) { area[i][j] = 0; }
    }
    rep(i, n) {
      int point[2];
      cin >> point[0] >> point[1];
      area[point[0]][point[1]] = 1;
    };
    int op, pos[] = {10, 10};
    cin >> op;
    rep(i, op) {
      string arrow;
      int dis;
      cin >> arrow >> dis;
      if (area[pos[0]][pos[1]] == 1) area[pos[0]][pos[1]] = 0;
      if (arrow == "N") {
        rep(j, dis) {
          pos[1]++;
          // cout << "pos: " << pos[0] << " " << pos[1] << endl;
          if (area[pos[0]][pos[1]] == 1) area[pos[0]][pos[1]] = 0;
        }
      }
      if (arrow == "S") {
        rep(j, dis) {
          pos[1]--;
          if (area[pos[0]][pos[1]] == 1) area[pos[0]][pos[1]] = 0;
        }
      }
      if (arrow == "E") {
        rep(j, dis) {
          pos[0]++;
          if (area[pos[0]][pos[1]] == 1) area[pos[0]][pos[1]] = 0;
        }
      }
      if (arrow == "W") {
        rep(j, dis) {
          pos[0]--;
          if (area[pos[0]][pos[1]] == 1) area[pos[0]][pos[1]] = 0;
        }
      }
    }
    string text = "Yes";
    rep(i, 21) {
      rep(j, 21) {
        if (area[i][j] == 1) text = "No";
      }
    }
    texts.push_back(text);
  }
  rep(i, texts.size()) { cout << texts[i] << endl; }
  return 0;
}

