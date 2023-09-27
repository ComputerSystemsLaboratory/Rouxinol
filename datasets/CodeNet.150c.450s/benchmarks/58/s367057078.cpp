#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  string op;
  stack<ll> s;
  while (cin >> op) {
    if (isdigit(op[0])) {
      ll val = atoll(op.c_str());
      s.push(val);
    }
    else {
      ll a = s.top(); s.pop();
      ll b = s.top(); s.pop();
      ll c = 0;
      switch (op[0]) {
        case '+': {
          c = b + a;
          break;
        }
        case '-': {
          c = b - a;
          break;
        }
        case '*': {
          c = b * a;
          break;
        }
        default:
          break;
      }
      s.push(c);
    }
  }
  fprintf(stdout, "%lld\n", s.top());
  return 0;
}