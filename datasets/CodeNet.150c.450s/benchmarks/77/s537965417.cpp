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
    area[10][10] = 0;
    int op, pos[] = {10, 10};
    cin >> op;
    rep(i, op) {
      string arrow;
      int dis;
      cin >> arrow >> dis;
      rep(j, dis) {
        if (arrow == "N")
          pos[1]++;
        else if (arrow == "S")
          pos[1]--;
        else if (arrow == "E")
          pos[0]++;
        else
          pos[0]--;
        area[pos[0]][pos[1]] = 0;
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

