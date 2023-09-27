#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

int main()
{
  string deck;
  while (cin >> deck, deck != "-") {
    int m;
    cin >> m;
    for (int sh = 0; sh < m; ++sh) {
      // put deck[0:m) on the back of deck
      int shamt;
      cin >> shamt;
      auto front = deck.substr(0, shamt);
      auto back  = deck.substr(shamt, deck.size() - shamt); 
      deck = back + front;
    }
    cout << deck << endl;
  }
}
