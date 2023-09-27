#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

const string MCXI = "ixcm";

int MCXI2Int(string s)
{
  int res = 0, tmp = 1;
  for (unsigned int i = 0; i < s.size(); ++i) {
    if (isdigit(s[i])) {
      tmp = s[i]-'0';
    } else {
      if (s[i] == 'm') {
	res += tmp * 1000;
      } else if (s[i] == 'c') {
	res += tmp * 100;
      } else if (s[i] == 'x') {
	res += tmp * 10;
      } else {
	res += tmp;
      }
      tmp = 1;
    }
  }
  return res;
}

string Int2MCXI(int n)
{
  stringstream ss;
  ss << n;
  string res = ss.str();
  reverse(res.begin(), res.end());
  unsigned int t = 0;
  for (string::iterator it = res.begin(); it != res.end(); ) {
    if (*it == '0') {
      it = res.erase(it);
      ++t;
    } else if (*it == '1') {
      *it = MCXI[t++];
      ++it;
    } else {
      it = res.insert(it, MCXI[t++]);
      it += 2;
    }
  }
  reverse(res.begin(), res.end());
  return res;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string s, t;
    cin >> s >> t;
    cout << Int2MCXI(MCXI2Int(s) + MCXI2Int(t)) << endl;
  }

  return 0;
}