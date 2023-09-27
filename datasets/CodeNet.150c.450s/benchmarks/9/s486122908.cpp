#include<iostream>
#include<string>
using namespace std;

string shuffle (string cards, int h) {
  string tmp;
  tmp = cards.substr(0,h);
  cards.erase(0,h);
  cards = cards + tmp;
  
  return cards;
}

int main() {
  string cards;
  int m;
  
  for (;;) {
    cin >> cards;
    if (cards == "-") break;
    
    cin >> m;
    
    int h = 0;
    for (int i = 0; i < m; i++) {
      cin >> h;
      cards = shuffle(cards,h);
    }

    cout << cards << endl;
    
  }
  
  return 0;
}
