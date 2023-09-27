#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;

  vector<size_t> s1;
  vector<pair<size_t, int> > s2;

  unsigned int area = 0;
  for (size_t i = 0; i < s.size(); ++i) {
    const char c = s[i];
    if (c == '\\') {
      s1.push_back(i);
    } else if (c == '/' && s1.size() > 0) {
      const size_t p = s1.back();
      s1.pop_back();
      area += (i - p);
      long a = i - p;
      while (s2.size() > 0 && s2.back().first > p) {
        a += s2.back().second;
        s2.pop_back();
      }
      s2.push_back(make_pair(p, a));
    }
  }

  cout << area << endl;
  cout << s2.size();
  for (size_t i = 0; i < s2.size(); ++i) {
    cout << " ";
    cout << s2[i].second;
  }
  cout << endl;

  return 0;
}