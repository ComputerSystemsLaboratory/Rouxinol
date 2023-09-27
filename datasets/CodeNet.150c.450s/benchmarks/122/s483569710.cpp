#include <iostream>
#include <queue>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
  std::priority_queue<int> q;
  std::string com;
  int key;

  while (1) {
    std::cin >> com;
    if (com == "insert") {
      std::cin >> key;
      q.push(key);
    } else if (com == "extract") {
      std::cout << q.top() << '\n';
      q.pop();
    } else {
      break;
    }
  }
  return 0;
}

