#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
  char com[20];
  priority_queue<int> PQ;

  while(1) {
    cin >> com;
    if (com[0] == 'i') {
      int key;
      cin >> key;
      PQ.push(key);
    } else if (com[1] == 'x') {
      cout << PQ.top() << endl;
      PQ.pop();
    } else if (com[0] == 'e') {
      break;
    }
  }
  return 0;
}