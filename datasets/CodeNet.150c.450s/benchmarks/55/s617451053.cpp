/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_B
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

    if (line == "0") {
      break;
    }

    int sum = 0;
    for (string::iterator it = line.begin(); it != line.end(); it++) {
      sum += *it - '0';
    }
    cout << sum << endl;
  }

  return 0;
}