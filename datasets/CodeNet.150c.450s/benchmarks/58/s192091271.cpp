#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
  string line;
  getline(cin, line);
  
  stack<int> stack;

  stringstream ss(line);
  string word;
  while (ss >> word) {
    if (word == "+") {
      int v1 = stack.top();
      stack.pop();
      int v2 = stack.top();
      stack.pop();

      stack.push(v2 + v1);
    } else if (word == "-") {
      int v1 = stack.top();
      stack.pop();
      int v2 = stack.top();
      stack.pop();

      stack.push(v2 - v1);
    } else if (word == "*") {
      int v1 = stack.top();
      stack.pop();
      int v2 = stack.top();
      stack.pop();

      stack.push(v2 * v1);
    } else {
      // operand
      int v = std::stoi(word);
      stack.push(v);
    }
  }
  
  int v = stack.top();
  cout << v << endl;

  return 0;
}