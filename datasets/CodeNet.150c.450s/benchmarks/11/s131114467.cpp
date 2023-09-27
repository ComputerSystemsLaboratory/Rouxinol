#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, cards[52] = {};
  cin >> n;
  string suits = "SHCD";

  for (int i = 0; i < n; i++) {
    char suit;
    int num;
    cin >> suit >> num;
    int row = suits.find(suit);
    int index = row * 13 + (num - 1);
    cards[index] = num;
  }

  for (int i = 0; i < 52; i++) {
    int num = cards[i];
    if (num != 0) continue;

    int row = i / 13;
    int lessNum = i - 13 * row + 1;
    cout << suits[row] << ' ' << lessNum << endl;
  }

  return 0;
}

