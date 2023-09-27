/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_B
 */
#include <iostream>
#include <string>

using namespace std;

int
main()
{
  ios::sync_with_stdio(false);

  while (true) {
    string line;
    getline(cin, line);

    if (line == "-") {
      break;
    }

    int m;
    cin >> m; cin.ignore();
    for (int i = 0; i < m; i++) {
      int h;
      cin >> h; cin.ignore();
      line = line.substr(h) + line.substr(0, h);
    }
    cout << line << endl;
  }

  return 0;
}