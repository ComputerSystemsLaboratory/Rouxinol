/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_C
 */
#include <iostream>
#include <string>
#include <vector>
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

  vector<int> count(26);
  string line;
  while (getline(cin, line)) {
    transform(line.begin(), line.end(), line.begin(), ToLower<char>);
    for (string::iterator it = line.begin(); it != line.end(); it++) {
      count[*it - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++) {
    cout << (char)('a' + i) << " : " << count[i] << endl;
  }

  return 0;
}