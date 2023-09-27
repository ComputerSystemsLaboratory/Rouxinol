#include <iostream>
#include <queue>
using namespace std;
int main() {
  priority_queue<int> q;
  int c;
  for (int i = 0; i < 10; ++i) {
    cin >> c;
    q.push(c);
  }
  for (int i = 0; i < 3; ++i) {
    cout << q.top() << endl;
    q.pop();
  }
  return 0;
}