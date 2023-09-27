#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main() {
  string word;
  stack<int> S;
  while (cin >> word) {
    if (word == "+") {
      int num0,num1;
      num0 = S.top(); S.pop();
      num1 = S.top(); S.pop();
      S.push(num0+num1);
    }
    else if (word == "-") {
      int num0,num1;
      num0 = S.top(); S.pop();
      num1 = S.top(); S.pop();
      S.push(num1-num0);
    }
    else if (word == "*") {
      int num0,num1;
      num0 = S.top(); S.pop();
      num1 = S.top(); S.pop();
      S.push(num0*num1);
    }
    else {
      S.push(stoi(word));
    }
  }
  cout << S.top() << endl;
}