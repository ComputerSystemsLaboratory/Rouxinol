#include <unordered_set>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n; // number of lines for input
  unordered_set <string> A;
  string command; // either insert or find
  string word; // string to insert
  cin >> n;
  for (int i=0; i<n; ++i) {
    cin >> command;
    if (command == "insert") {
      cin >> word;
      if (word.size() > 12) break;
      A.insert(word);
    }
    else if (command == "find") {
      cin >> word;
      if (A.count(word) == 1) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    else break;
  }
}