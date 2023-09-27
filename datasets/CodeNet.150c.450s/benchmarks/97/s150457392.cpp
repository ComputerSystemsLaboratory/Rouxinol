#include <iostream>
#include <tr1/unordered_map>
#include <cmath>
using namespace std;
class Ord {
  public:
    int x;
    int y;
};

class Mm {
  public:
  //int minxp, minxm, maxxp, maxxm, minyp, minym, maxyp, maxym;
  int maxx, maxy, minx, miny;
  Mm() {
    //minxp = minxm = maxxp = maxxm = minyp = minym = maxyp = maxym = 0;
    maxx = maxy = minx = miny = 0;
  }
  void resist(Ord ord) {
    maxx = max(maxx, ord.x);
    maxy = max(maxy, ord.y);
    minx = min(minx, ord.x);
    miny = min(miny, ord.y);
  }
  int getHeight() {
    return (abs(maxy) + abs(miny) + 1);
  }
  int getWidth() {
    return (abs(maxx) + abs(minx) + 1);
  }
};

int main() {
  while(true) {
    Mm mm;
    int ncard;
    cin >> ncard;
    if(ncard == 0) break;
    tr1::unordered_map<int, Ord> cards;
    Ord zero;
    zero.x = zero.y = 0;
    cards[0] = zero;
    for(int i = 1; i < ncard; ++i) {
      int target, direction;
      cin >> target >> direction;
      int x = cards[target].x;
      int y = cards[target].y;
      switch(direction) {
        case 0:
          --x;
          break;
        case 1:
          --y;
          break;
        case 2:
          ++x;
          break;
        case 3:
          ++y;
          break;
      }
      Ord card;
      card.x = x;
      card.y = y;
      cards[i] = card;
      mm.resist(card);
    }
    cout << mm.getWidth() << " " << mm.getHeight() << endl;
  }
  return 0;
}