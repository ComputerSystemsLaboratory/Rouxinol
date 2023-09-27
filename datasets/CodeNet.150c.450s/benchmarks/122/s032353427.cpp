#include <bits/stdc++.h>
using namespace std;

int main() {

  priority_queue<int> que;

  while (1) {
    string command;
    cin >> command;
    if (command == "insert") {
      int x;
      cin >> x;
      que.push(x);
    } else if (command == "extract") {
      cout << que.top() << endl;
      que.pop();
    } else if (command == "end") {
      return 0;
    }
  }

  return 0;

}
