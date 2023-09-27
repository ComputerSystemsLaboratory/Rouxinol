/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_A
 */
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

template <typename T_char>
T_char
ToLower(T_char c)
{
  return tolower(c);
}

int
main()
{
  ios::sync_with_stdio(false);

  string W;
  getline(cin, W);

  int count = 0;
  while (true) {
    string line;
    getline(cin, line);

    if (line == "END_OF_TEXT") {
      break;
    }
    transform(line.begin(), line.end(), line.begin(), ToLower<char>);
    stringstream ss(line);
    while (!ss.eof()) {
      string s;
      ss >> s;
      if (s == W) { count++; }
    }
  }
  cout << count << endl;

  return 0;
}