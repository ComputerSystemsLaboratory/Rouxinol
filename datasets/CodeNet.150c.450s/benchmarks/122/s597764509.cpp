#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

const int MAX_H = 100000;

int main(void) {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);  
  
  std::priority_queue<int> *pq = new std::priority_queue<int>();

  std::string command;
  std::cin >> command;
  
  while (command != "end") {
    if (command[0] == 'i') {
      int k = 0;

      std::cin >> k;

      pq->push(k);
    } else if (command[0] == 'e') {
      int v = pq->top();
      pq->pop();
      
      std::cout << v << std::endl;
    }

    std::cin >> command;
  }
  
  return 0;
}