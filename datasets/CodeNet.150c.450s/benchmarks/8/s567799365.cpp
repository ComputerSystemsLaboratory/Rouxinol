#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  int point_t = 0;
  int point_h = 0;
  string card_t;
  string card_h;
  for (int i = 0; i < n; ++i) {
    cin >> card_t >> card_h;
  
    if (card_t == card_h) {
      ++point_t;
      ++point_h;
      continue;
    }

    if (card_t < card_h)
      point_h += 3;
    else
      point_t += 3;
  }

  cout << point_t << " " << point_h << endl;
  return 0;
}