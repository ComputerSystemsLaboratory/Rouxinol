#include <iostream>
#include <queue>

using namespace std;

int main(){
  priority_queue<int> Q;
  int value;
  string order;

  while (cin >> order ,order != "end") {
    if (order == "insert") {
      cin >> value;
      Q.push(value); 
    } else {
      cout << Q.top() << endl;
      Q.pop();
    }
  }

  return 0;
}