#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Parse(vector<int>& stack, const string& s) {
  if (s == "+") {
    const int a = stack.back();
    stack.pop_back();
    const int b = stack.back();
    stack.pop_back();
    stack.push_back(a + b);
  } else if (s == "-") {
    const int a = stack.back();
    stack.pop_back();
    const int b = stack.back();
    stack.pop_back();
    stack.push_back(b - a); // N.B.
  } else if (s == "*") {
    const int a = stack.back();
    stack.pop_back();
    const int b = stack.back();
    stack.pop_back();
    stack.push_back(a * b);
  } else {
    stack.push_back(atoi(s.c_str()));
  }
}

int main() {
  string line;
  getline(cin, line);
  vector<int> stack;

  size_t begin = 0;
  for (;;) {
    const size_t end = line.find_first_of(" ", begin);
    if (end == string::npos) {
      Parse(stack, line.substr(begin));
      break;
    }
    Parse(stack, line.substr(begin, end-begin));
    begin = end + 1;
  }
  cout << stack.back() << endl;
  return 0;
}