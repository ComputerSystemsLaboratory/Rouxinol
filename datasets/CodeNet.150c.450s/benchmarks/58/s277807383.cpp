// Reverse Polish Notation
#include <string>
#include <stack>
#include <iostream>
#include <cstdlib>
using namespace std; 

stack<int> S;
int main() {
  int temp = 0;
  int temp2 = 0;
  string word;
  while (cin >> word) {
    if (word == "+") {
      temp = S.top();
      S.pop();
      temp += S.top();
      S.pop();
      S.push(temp);
    }
    else if (word == "-") {
      temp = S.top();
      S.pop();
      temp2 = S.top();
      S.pop();
      temp = temp2 - temp;
      S.push(temp);
    }
    else if (word == "*") {
      temp = S.top();
      S.pop();
      temp *= S.top();
      S.pop();
      S.push(temp);
    }
    else {
      temp = atoi(word.c_str());
      S.push(temp);
    }
  }
  cout << temp << endl;
}