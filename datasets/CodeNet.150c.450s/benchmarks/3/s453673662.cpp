/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_D
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int
main()
{
  ios::sync_with_stdio(false);

  string line;
  getline(cin, line);

  int n;
  cin >> n; cin.ignore();

  for (int i = 0; i < n; i++) {
    string cmd;
    int p1, p2;
    cin >> cmd >> p1 >> p2;

    if (cmd == "replace") {
      string r;
      cin >> r;
      line.replace(p1, p2 - p1 + 1, r);
    } else if (cmd == "reverse") {
      reverse(line.begin() + p1, line.begin() + p2 + 1);
    } else if (cmd == "print") {
      cout << line.substr(p1, p2 - p1 + 1) << endl;
    }
    cin.ignore();
  }

  return 0;
}