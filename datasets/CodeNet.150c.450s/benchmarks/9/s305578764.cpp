#include <iostream>
#include <string>

using namespace std;
int main() {
  string cards;
  int n;
  while(cin >> cards) {
    if (cards == "-") {
      return 0;
    }
    cin >> n;
    for(int i=0; i<n; i++) {
      int h;
      cin >> h;

      string str="";
      for(int j=0; j<h; j++) {
        str += cards[j];
      }

      for(unsigned int j=0; j < cards.length()-h; j++) {
        cards[j] = cards[j+h];
      }
      int pos=0;
      for(int j=h; 0<j; j--) {
        cards[cards.length()-j] = str[pos];
        pos++;
      }
    }
    cout << cards << endl;
  }
}