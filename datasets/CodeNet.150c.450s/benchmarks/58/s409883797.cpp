#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main() {
  string word;
  stack<int> S;
  int i;
  while (cin >> word) {
    if (word == "+") {
      i = S.top();
      S.pop();
      i += S.top();
      S.pop();
      S.push(i);
    }
    else if (word == "-") {
      i = S.top();
      S.pop();
      i = S.top() - i;
      S.pop();
      S.push(i);
    }
    else if (word == "*") {
      i = S.top();
      S.pop();
      i *= S.top();
      S.pop();
      S.push(i);
    }
    else {
      S.push(stoi(word));
    }
  }
  cout << S.top() << endl;
  return 0;
}