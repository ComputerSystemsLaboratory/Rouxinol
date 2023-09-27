#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)

int main(int argc, char **argv)
{
  map<string, int> words;
  string s;
  string maxword;

  maxword = "";
  for (;;) {
    cin >> s;
    if (cin.eof())
      break;

    if (s.length() > maxword.length())
      maxword = s;
    words[s]++;
  }

  int most = 0;
  string mostword = "";
  tr (words, i) {
    if (i->second > most) {
      most = i->second;
      mostword = i->first;
    }
  }
  cout << mostword << " " << maxword << endl;
  return 0;
}