#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
  priority_queue <int> q;
  string method;
  int x;

  while(true) {
    cin >> method;
    if(method == "insert") {
      cin >> x;
      q.push(x);
    }
    else if(method == "extract") {
      cout << q.top() << endl;
      q.pop();
    }
    else break;
  }

  return 0;
}