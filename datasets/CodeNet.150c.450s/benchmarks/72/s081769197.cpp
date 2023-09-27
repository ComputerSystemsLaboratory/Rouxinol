/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_A
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

char
SwapCase(const char c)
{
  if (isupper(c)) {
    return tolower(c);
  } else if (islower(c)) {
    return toupper(c);
  }
  return c;
}

int
main()
{
  ios::sync_with_stdio(false);

  string str;
  getline(cin, str);
  transform(str.begin(), str.end(), str.begin(), SwapCase);
  cout << str << endl;

  return 0;
}