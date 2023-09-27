#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(10000), b(10000);
  vector<char> op(10000);
  int idx = 0;
  while(true) {
    cin >> a.at(idx) >> op.at(idx) >> b.at(idx);
    if(op.at(idx) == '?') break;
    idx++;
  }
  idx = 0;
  while (op.at(idx) != '?') {
    if (op.at(idx) == '+') cout << a.at(idx) + b.at(idx) << endl;
    else if (op.at(idx) == '-') cout << a.at(idx) - b.at(idx) << endl;
    else if (op.at(idx) == '*') cout << a.at(idx) * b.at(idx) << endl;
    else if (op.at(idx) == '/') cout << a.at(idx) / b.at(idx) << endl;
    idx++;
  }
}
