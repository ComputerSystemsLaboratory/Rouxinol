#include <iostream>

using namespace std;

int main(void) {
  int times,h;
  string card,temp1,temp2;
  while(cin >> card && card[0] != '-') {
    cin >> times;
    for(int i = 0; i < times; i++) {
      cin >> h;
      temp1 = card.substr(0, h);
      temp2 = card.substr(h, card.length());
      card = temp2 + temp1;
    }
    cout << card << endl;
  }
  return 0;
}