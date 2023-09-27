#include <iostream>
#include <stack>
#include <vector>

#define FLAT 0
#define DOWN 1
#define FILL 2

using namespace std;

struct Token {
  int type;
  int width;
  int size;
};

int main() {
  stack<Token> S;
  char ch;
  int ndown = 0;
  Token token, v;

  while (cin >> ch) {
    switch (ch) {
    case '/':
      if (ndown == 0)
        break;
      token = Token{FILL, 1, 0};
      while (1) {
        v = S.top();
        S.pop();
        token.width += v.width;
        token.size += v.size;
        if (v.type == DOWN) {
          ndown--;
          break;
        }
        if (v.type == FILL) {
          token.size += v.width;
        }
      }
      S.push(token);
      break;
    case '\\':
      S.push(Token{DOWN, 1, 1});
      ndown++;
      break;
    case '_':
      S.push(Token{FLAT, 1, 1});
      break;
    }
  }

  vector<int> result;
  int sum = 0;
  while (!S.empty()) {
    token = S.top();
    if (token.type == FILL) {
      result.push_back(token.size);
      sum += token.size;
    }
    S.pop();
  }

  cout << sum << endl;
  cout << result.size();
  for (int i = result.size() - 1; i >= 0; i--) {
    cout << " " << result[i];
  }
  cout << endl;
}