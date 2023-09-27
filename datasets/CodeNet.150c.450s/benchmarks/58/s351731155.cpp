#include <string>
#include <stack>
#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
  string word;
  stack<int> S;
  int current1;
  int current2;

  while (cin >> word) {
    if (word == "+") {
      current1 = S.top();
      S.pop();
      current2 = S.top();
      S.pop();
      S.push(current1 + current2);
    }
    else if (word == "-") {
      current1 = S.top();
      S.pop();
      current2 = S.top();
      S.pop();
      S.push(current2 - current1);
    }
    else if (word == "*") {
      current1 = S.top();
      S.pop();
      current2 = S.top();
      S.pop();
      S.push(current1 * current2);
    } else {
      S.push(atoi(word.c_str()));
    }
  }
  cout << S.top() << endl;
}