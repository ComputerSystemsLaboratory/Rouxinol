#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  int n;
  stack<int> stack;
  vector<int> v;
  while(cin >> n) {
    if(n == 0) {
      v.push_back(stack.top());
      stack.pop();
    } else {
      stack.push(n);
    }
  }

  for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}