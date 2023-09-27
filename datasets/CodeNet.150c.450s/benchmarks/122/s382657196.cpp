#include <queue>
#include <iostream>
#include <string>
using namespace std;

priority_queue<int> S; // priority queue in nonincreasing order
int k; // the integer to insert
int main() {
  string word; // insert, extract, or end
  while (cin >> word) {
    if (word == "insert") {
      cin >> k;
      S.push(k);
    }
    else if (word == "extract") {
      int n = S.top();
      S.pop();
      cout << n << endl;
    }
    else if (word == "end") break;
  }
}