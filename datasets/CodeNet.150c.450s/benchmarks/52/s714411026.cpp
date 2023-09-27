#include <iostream>
#include <stack>
using namespace std;

int main() {
  int in;
  stack<int> t;

  while (cin >> in) {
    if (in != 0) {
      t.push(in);
    }
    else {
      cout << t.top() << endl;
      t.pop();
    }
  }
}