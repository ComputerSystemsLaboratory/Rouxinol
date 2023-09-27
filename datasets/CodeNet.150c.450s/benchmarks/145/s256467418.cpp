#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<string, int> fq;
  string s, ms = "";
  while (cin >> s) {
    ++fq[s];
    if (ms.size() < s.size())
      ms = s;
  }

  int cnt = 0;
  for (map<string, int>::iterator it = fq.begin(); it != fq.end(); ++it) {
    if (cnt < (*it).second) {
      s = (*it).first;
      cnt = (*it).second;
    }
  }

  cout << s << " " << ms << endl;
  return 0;
}