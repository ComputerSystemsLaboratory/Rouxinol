#include <iostream>
#include <string>
using namespace std;

const string tbl[] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main()
{
  int T;
  cin >> T;
  for (int t = 0; t < T; ++t) {
    string s;
    cin >> s;

    int index = 0, cnt = 0;
    for (unsigned int i = 0; i < s.size(); ++i) {
      if (index == 0) {
	index = s[i] - '0';
	cnt = 0;
      } else {
	if (s[i] == '0') {
	  cout << tbl[index][cnt%tbl[index].size()];
	  index = 0;
	} else {
	  ++cnt;
	}
      }
    }
    cout << endl;
  }
  return 0;
}