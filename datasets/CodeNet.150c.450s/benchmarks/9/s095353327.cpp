#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> cards;
  while (true) {
    int m;
    string now;
    cin >> now;
    if (now == "-")
      break;
    cin >> m;
    for (int i=0;i<m;i++) {
      int h;
      cin >> h;
      now = now + now.substr(0, h);
      now = now.substr(h);
    }
    cards.push_back(now);
  }
  for (int i=0;i<cards.size();i++)
    cout << cards[i] << endl;
}

