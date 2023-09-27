#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  string s;
  cin >> s;
  int p;
  cin >> p;
  for (int i = 0; i < p; ++i) {
    string command;
    int a, b;
    cin >> command >> a >> b;
    if (command == "print") {
      fprintf(stdout, "%s\n", s.substr(a, b - a + 1).c_str());
    }
    else if (command == "reverse") {
      reverse(s.begin() + a, s.begin() + b + 1);
    }
    else if (command == "replace") {
      string t;
      cin >> t;
      s.replace(a, b - a + 1, t);
    }
  }
  return 0;
}