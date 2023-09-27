// Reverse Polish Notation
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp
// 所要時間　２０分　{中央}×{中央}
// Stack

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

using namespace std;

int main() {
  string word;
  stack<int> S;
  while (cin >> word) {
    if (word == "*") {
      int n = S.top();
      S.pop(); 
      n *= S.top();
      S.pop();
      S.push(n);
    }
    else if (word == "+") {
      int n = S.top();
      S.pop(); 
      n += S.top();
      S.pop();
      S.push(n);
    }
    else if (word == "-") {
      int n = S.top();
      S.pop();
      n = S.top() - n;
      S.pop();
      S.push(n);
    }
    else {
      int num = atoi(word.c_str());
      S.push(num);
    }
  }
  cout << S.top() << endl;
}

