#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int a, b;
  char op;
  while (true) {
    fscanf(stdin, "%d %c %d", &a, &op, &b);
    if (op == '?') { break; }
    int val = -1;
    switch (op) {
      case '+': {
        val = a + b;
        break;
      }
      case '-': {
        val = a - b;
        break;
      }
      case '*': {
        val = a * b;
        break;
      }
      case '/': {
        val = a / b;
        break;
      }
    }
    fprintf(stdout, "%d\n", val);
  }
  return 0;
}