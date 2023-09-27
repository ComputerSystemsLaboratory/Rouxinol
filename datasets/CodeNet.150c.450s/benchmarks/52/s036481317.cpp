#include <iostream>
#include <stack>
using namespace std;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int train;
  stack<int> trains;

  while (cin >> train) {
    if (train == 0) {
      cout << trains.top() << endl;
      trains.pop();
    } else {
      trains.push(train);
    }
  }

  return 0;
}