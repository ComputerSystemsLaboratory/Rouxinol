#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> que;
  int h;

  for(int i = 0; i < 10; i++) {
    cin >> h;
    que.push(h);
  }

  for(int i = 0; i < 3; i++) {
    cout << que.top() << endl;
    que.pop();
  }

  return 0;
}