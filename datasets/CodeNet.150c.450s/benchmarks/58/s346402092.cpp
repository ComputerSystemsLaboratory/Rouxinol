#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;


bool is_operator(string str) {
  return str == "+" || str == "-" || str == "*";
}

int calculate_polish_expression(vector<string> expression) {
  stack<int> s;
  for (auto str : expression) {
    if (is_operator(str)) {
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      int res;
      if (str == "+") {
        res = a + b;
      } else if (str == "-") {
        res = b - a;
      } else {
        res = a * b;
      }
      s.push(res);
    } else {
      s.push(stoi(str));
    }
  }
  return s.top();
}

int main() {
  string str;
  getline(cin, str);
  vector<string> expression;
  istringstream istr(str);
  string tmp;
  while (getline(istr, tmp, ' ')) {
    expression.push_back(tmp);
  }
  cout << calculate_polish_expression(expression) << endl;
}