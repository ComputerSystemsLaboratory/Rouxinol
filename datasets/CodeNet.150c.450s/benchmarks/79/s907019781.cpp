#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int n, r;
  while (cin >> n, cin >> r, n && r) {
    vector<int> card;
    for (int i = 0; i < n; i++) {
      card.push_back(i);
    }
    for (int i = 0; i < r; i++) {
      int p, c;
      cin >> p >> c;
      p--;
      for (int j = n-p-c; j < n-p; j++) {
        card.push_back(card[j]);
      }
      card.erase(card.begin() + n-p-c, card.begin() + n-p);
      for (int j = 0; j < card.size(); j++) {
        //cerr << card[j]+1 << " ";
      }
      //cerr << endl;
    }

    cout << card.back() +1 << endl;
  }
  return 0;
}