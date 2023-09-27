#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n;
  int count = 0;
  priority_queue<int> que;
  while (cin >> n) {
    que.push(n);
    count++;
  }
  cout << que.top(); que.pop();
  for (int i = 0; i < count-1; i++) {
    cout << " " << que.top(); que.pop();
  }
  cout << endl;

  return 0;
}