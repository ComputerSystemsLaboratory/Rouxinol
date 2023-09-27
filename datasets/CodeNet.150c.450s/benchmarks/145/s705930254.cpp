#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  string sa[1000];
  int ia[1000] = {};

  int cnt = 0;
  string s, ss = "";
  while(cin >> s) {
    for(int i = 0; i < s.size(); i++) {
      if('A' <= s[i] && s[i] <= 'Z') s[i] += 'a'-'A';
    }

    int p = -1;
    for(int i = 0; i < cnt; i++) {
      if(sa[i] == s) p = i;
    }

    if(p != -1) ia[p]++;
    else {
      ia[cnt]++;
      sa[cnt++] = s;
    }

    if(s.size() > ss.size()) ss = s;
  }

  int f = -1;
  string fs;
  for(int i = 0; i < cnt; i++) {
    if(f < ia[i]) {
      fs = sa[i];
      f = ia[i];
    }
  }
  cout << fs << ' ' << ss << endl;
}