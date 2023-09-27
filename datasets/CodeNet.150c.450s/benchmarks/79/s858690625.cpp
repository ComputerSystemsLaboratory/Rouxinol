#include <vector>
#include <iostream>
using namespace std;

int main() {
  while(true) {
    int ncard, r;
    cin >> ncard >> r;
    if(ncard == 0 && r == 0) break;
    vector<int> cards(ncard);
    for(int i = 0; i < ncard; ++i) cards[i] = ncard - i;
    for(int i = 0; i < r; ++i) {
      int p, c;
      vector<int> results;
      cin >> p >> c;
      for(int j = p - 1; j < p - 1 + c; ++j) {
        results.push_back(cards[j]);
      }
      for(int j = 0; j < p - 1; ++j) {
        results.push_back(cards[j]);
      }
      for(int j = p - 1 + c; j < ncard; ++j) {
        results.push_back(cards[j]);
      }
      cards = results;
    }
    cout << cards[0] << endl;
  }
  return 0;
}