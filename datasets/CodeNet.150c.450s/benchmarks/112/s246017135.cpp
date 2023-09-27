#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  int n, m;
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    char num[10], upper[26], lower[26];
    for (int i = 0; i < 10; i++)
      num[i] = i+'0';
    for (int i = 0; i < 26; i++)
      upper[i] = i+'A';
    for (int i = 0; i < 26; i++)
      lower[i] = i+'a';

    char bef, aft;
    for (int i = 0; i < n; i++) {
      cin >> bef >> aft;
      if ('0' <= bef && bef <= '9')
        num[bef-'0'] = aft;
      else if ('A' <= bef && bef <= 'Z')
        upper[bef-'A'] = aft;
      else if ('a' <= bef && bef <= 'z')
        lower[bef-'a'] = aft;
    }

    cin >> m;
    string result  = string("");
    char c;
    for (int i = 0; i < m; i++) {
      cin >> c;
      if ('0' <= c && c <= '9')
        result += num[c-'0'];
      else if ('A' <= c && c <= 'Z')
        result += upper[c-'A'];
      else if ('a' <= c && c <= 'z')
        result += lower[c-'a'];
    }

    cout << result << endl;
  }
  return 0;
}