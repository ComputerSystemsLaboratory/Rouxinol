#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  string op = "";
  priority_queue<int> que;
  do {
    cin >> op;
    if (op == "insert") {
      cin >> k;
      que.push(k);
    } else if (op == "extract") {
      cout << que.top() << endl;
      que.pop();
    }
  } while (op != "end");
}

