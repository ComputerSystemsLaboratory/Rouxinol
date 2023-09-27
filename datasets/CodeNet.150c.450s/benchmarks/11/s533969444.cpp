#include <iostream>
using namespace std;
       
int main() {
  int n;
  cin >> n;
  int TYPES = 4;
  int NUMBERS = 13;
  int cards[TYPES][NUMBERS];
  string type;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> type >> num;
    if (type == "S") {
      cards[0][num - 1] = 1;
    } else if (type == "H") {
      cards[1][num - 1] = 1;
    } else if (type == "C") {
      cards[2][num - 1] = 1;
    } else if (type == "D") {
      cards[3][num - 1] = 1;
    }
  }
  for (int i = 0; i < TYPES; i++) {
    for (int j = 0; j < NUMBERS; j++) {
      if (cards[i][j] != 1) {
        if (i == 0) {
          cout << "S " << j + 1 << endl;
        } else if (i == 1) {
          cout << "H " << j + 1 << endl;
        } else if (i == 2) {
          cout << "C " << j + 1 << endl;
        } else if (i == 3) {
          cout << "D " << j + 1 << endl;
        }
      }
    }
  }
  return 0;
}