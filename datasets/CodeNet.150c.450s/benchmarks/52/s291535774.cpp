#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> trains;
  int t_number;
  while(cin >> t_number) {
    if (t_number != 0) {
      trains.push(t_number);
    }
    else {
      cout << trains.top() << endl;
      trains.pop();
    }
  }
  return 0;
}