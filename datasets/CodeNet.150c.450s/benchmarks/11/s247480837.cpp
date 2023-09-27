#include <iostream>
using namespace std;

int main(void)
{
  int n, i, j, num, picnum;
  char pic;
  int cards[4][13] = {};
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> pic >> num;
    if (pic == 'S') picnum = 0;
    if (pic == 'H') picnum = 1;
    if (pic == 'C') picnum = 2;
    if (pic == 'D') picnum = 3;
    cards[picnum][num - 1] = 1;
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++){
      if (cards[i][j] == 0) {
        switch(i) {
          case 0: pic = 'S'; break;
          case 1: pic = 'H'; break;
          case 2: pic = 'C'; break;
          case 3: pic = 'D'; break;
          default: pic = 'N'; break;
        }
        cout << pic << " " << j + 1 << endl;
      }
    }
  }
  return 0;
}