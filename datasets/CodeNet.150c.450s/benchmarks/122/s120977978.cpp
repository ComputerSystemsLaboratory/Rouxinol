#include <queue>
#include <string>
#include <iostream>
using namespace std;
int main () {
  priority_queue<int> Q;
  string a;
  while (cin >> a && a != "end") {
    int b;
    if (a == "insert") {
      cin >> b;
      Q.push(b);
    }
    else {
      cout << Q.top() << endl;
      Q.pop();
    }
  }
}
      