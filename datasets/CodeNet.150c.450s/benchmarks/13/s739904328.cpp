#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

static bool find(size_t pos,
                 const string& s,
                 const string& p) {
  auto it = s.begin() + pos;
  for (auto c : p) {
    if (*it != c)
      return false;

    ++it;
    if (it == s.end())
      it = s.begin();
  }
  return true;
}

int main() {
  string s, p;
  cin >> s >> p;

  bool found = false;
  for (size_t i = 0; i < s.length(); ++i) {                                                                                                                               
    if (find(i, s, p)) {
      found = true;
      break;
    }
  }

  if (found)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}