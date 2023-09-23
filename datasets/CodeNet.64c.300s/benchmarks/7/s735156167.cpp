#include <iostream>
using namespace std;
int main() {
    int spade, dia, heart, club;
    spade = dia = heart = club = 0;
    int n;
    cin >> n;
    for (int i = 0; i< n; i++) {
      char type;
      int num;
      cin >> type >> num;
      int mask = 1;
      mask <<= num-1;
      if (type == 'S') {
        spade |= mask;
      } else if (type == 'D') {
        dia |= mask;
      } else if (type == 'H') {
          heart |= mask;
      } else if (type == 'C') {
        club |= mask;
      }
    }

    int bit1mask = 1;
    for (int i = 0; i < 13; i++) {
      if (!(spade & bit1mask)) {
        cout << "S " << i + 1 << endl;
      }
      spade >>= 1;
    }


    for (int i = 0; i < 13; i++) {
      if (!(heart & bit1mask)) {
        cout << "H " << i + 1 << endl;
      }
      heart >>= 1;
    }

    for (int i = 0; i < 13; i++) {
      if (!(club & bit1mask)) {
        cout << "C " << i + 1 << endl;
      }
      club >>= 1;
    }

    for (int i = 0; i < 13; i++) {
      if (!(dia & bit1mask)) {
        cout << "D " << i + 1 << endl;
      }
      dia >>= 1;
    }

    return 0;
}