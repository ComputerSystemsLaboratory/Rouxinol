#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
  int m;
  while (cin >> m) {
    for (int i = 0; i < m; ++i) {
      string s;
      cin >> s;

      set<string > ans;
      for (unsigned int j = 1; j < s.size(); ++j) {
	string s1 = s.substr(0, j);
	string s2 = s.substr(j);
	ans.insert(s1+s2);
	ans.insert(s2+s1);
	reverse(s2.begin(), s2.end());
	ans.insert(s1+s2);
	ans.insert(s2+s1);
	reverse(s1.begin(), s1.end());
	ans.insert(s1+s2);
	ans.insert(s2+s1);
	reverse(s2.begin(), s2.end());
	ans.insert(s1+s2);
	ans.insert(s2+s1);
      }
      cout << ans.size() << endl;
    }
  }
  return 0;
}