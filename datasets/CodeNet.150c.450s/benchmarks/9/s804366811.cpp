#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int i, shfnum, pos;
  string cards, ctmp;
  while (1) {
    cin >> cards;
    if (cards == "-") break;
    cin >> shfnum;
    for (i = 0; i < shfnum; i++) {
      cin >> pos;
      ctmp = cards.substr(0, pos);
      cards = cards.erase(0, pos);
      cards += ctmp;
    }
    cout << cards << endl;
  }
  return 0;
}